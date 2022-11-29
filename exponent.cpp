#include<iostream>
// #include<math.h>
  using namespace std;
  int main(){
      int a,b;
     cout<<"enter \n base no.:";
     cin>>a;
     cout<<"exponent:";
     cin>>b;

     // cout<<endl<<"result:"<<pow(a,b);
     int result=1;
     for(int i=1 ;i<=b; i++){
     	result*=a;
     }
          cout<<endl<<"result:"<<result;

     }
