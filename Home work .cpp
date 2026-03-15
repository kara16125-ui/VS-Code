#include<iostream>
using namespace std;
int main(){
  int a=20,b=2;
  int Number;
  cout<<"a = 20 b= 2\n1. (+)\n2. (-)\n3.(*)\n4.(/)\n5.(%)\nchose number : ";cin>>Number;
  switch(Number ){
  case 1 :{
    cout<<"Show (A + B) = "<<a+b<<endl;
    break;
  }
  case 2 :{
    cout<<"Show (A - B) = "<<a-b<<endl;
    break;
  }
  case 3 :{
    cout<<"Show (A * B) = "<<a*b<<endl;
    break;
  }
  case 4 :{
    cout<<"Show (A / B) = "<<a/b<<endl;
    break;
  }
  case 5 :{
    cout<<"Show (A % B) = "<<a%b<<endl;
    break;
  }
  default :{
    cout<<"No Answer";
    break;
  }
}
return 0;
}
 bb