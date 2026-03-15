//+------------------------------------------------------------------+
//|                                         Ultimate_Gold_Combo.mq5  |
//|                                  Copyright 2026, AI Specialist   |
//+------------------------------------------------------------------+
#property strict

#include <Trade\Trade.mqh>
CTrade trade;

// ប៉ារ៉ាម៉ែត្រសម្រាប់កំណត់
input int      InpEMA = 200;          // Trend Filter (EMA 200)
input int      InpRSI = 14;           // RSI Period
input int      InpStochK = 5;         // Stochastic K
input int      InpStochD = 3;         // Stochastic D
input double   InpLotSize = 0.1;      // Lot Size
input int      InpStopLoss = 300;     // SL (Points)
input int      InpTakeProfit = 600;    // TP (Points) - ប្រើ R:R 1:2

void OnTick()
{
   // ១. ទាញយកទិន្នន័យពី Indicators
   double ema[], rsi[], stochK[], stochD[];
   
   int hEMA = iMA(_Symbol, _Period, InpEMA, 0, MODE_EMA, PRICE_CLOSE);
   int hRSI = iRSI(_Symbol, _Period, InpRSI, PRICE_CLOSE);
   int hStoch = iStochastic(_Symbol, _Period, InpStochK, InpStochD, 3, MODE_SMA, STO_LOWHIGH);

   CopyBuffer(hEMA, 0, 0, 3, ema);
   CopyBuffer(hRSI, 0, 0, 3, rsi);
   CopyBuffer(hStoch, 0, 0, 3, stochK); // Buffer 0 is K
   CopyBuffer(hStoch, 1, 0, 3, stochD); // Buffer 1 is D

   double Price = SymbolInfoDouble(_Symbol, SYMBOL_ASK);
   double Bid = SymbolInfoDouble(_Symbol, SYMBOL_BID);

   // ២. លក្ខខណ្ឌសម្រាប់ BUY (ត្រូវផ្ទៀងផ្ទាត់ទាំងអស់)
   // - តម្លៃនៅលើ EMA 200
   // - RSI > 50
   // - Stochastic K កាត់ឡើងលើ D ហើយស្ថិតនៅក្រោម 30
   if(Price > ema[0] && rsi[0] > 50 && stochK[0] > stochD[0] && stochK[0] < 30)
   {
      if(PositionsTotal() < 1) // បើកម្តងមួយ Order ដើម្បីសុវត្ថិភាព
      {
         trade.Buy(InpLotSize, _Symbol, Price, Price - InpStopLoss*_Point, Price + InpTakeProfit*_Point, "Super Combo Buy");
      }
   }

   // ៣. លក្ខខណ្ឌសម្រាប់ SELL
   if(Price < ema[0] && rsi[0] < 50 && stochK[0] < stochD[0] && stochK[0] > 70)
   {
      if(PositionsTotal() < 1)
      {
         trade.Sell(InpLotSize, _Symbol, Bid, Bid + InpStopLoss*_Point, Bid - InpTakeProfit*_Point, "Super Combo Sell");
      }
   }
}