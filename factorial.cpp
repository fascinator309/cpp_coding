#include<iostream>
  using namespace std;
  int main(){
      int n;
      cout<<"enter nth no. of the factoial :";
      cin>>n;

      int factorial=1;
      for(int i=1; i<=n;i++){
      	factorial*=i;
      	
      	cout<<endl<<"factorial of "<<i<<"="<<factorial;
      }
      }

      
