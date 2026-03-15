#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    float in , out ;
    float total , mony;

    cout<<"time in : ";
    cin>>in;
    cout<<"time out : ";
    cin>>out;

    total=out-in;
     if(in <= 16 && out <= 16)
     {
        mony=total*100;
     }
     else if(in >=16 && out >= 16)
     {
        mony=total*200;
     }
     else if(in <= 16 && out >= 16)
     {
        mony=(16-in)*100 + (out-16)*200;
     }
     else
     {
        mony=total*0;
     }
     cout<<endl<<"total mony is = "<<mony<<" real"<<endl;
    return 0;
}