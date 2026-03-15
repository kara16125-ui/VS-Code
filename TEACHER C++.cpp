#include<iostream>
using namespace std;

int main()
{
    int i,n,sum=0;
    for(i=0; i<=10;i++)
    if(i%2)
    {
        cout<<i<<endl;
        sum+=i;
    }
    cout<<"sume = "<<sum; 
}