#include<iostream>
using namespace std;

int main()
{
    char  opara; 
    int number1 ,number2;
    cout<<"ma sin ket lak"<<endl;
    cin>>number1;
    cin >> opara;
    cin>>number2;
    
    switch(opara)
    {
        case '+':
            cout << "answer = " << number1+number2<<endl; break;
        case '-':
            cout << "answer = " << number1-number2<<endl; break;
        case '*':
            cout << "answer = " << number1*number2<<endl; break;
        case '/':
            cout << "answer = " << number1/number2<<endl; break;
        case '%':
            cout << "answer = " << number1%number2<<endl; break;
        default:
            cout <<endl<< "on answer"<<endl;
    }
    return 0;
}