#include<iostream>
using namespace std;

int main(){
  int n;
	cout<<"enter the value of n:";
	cin>>n;
int digits=0;
// while(n>0){
    // digits++;
	// n=n/10;
// }
for(;n>0;digits++){
	n=n/10;
}

	cout<<endl<<"no. of dight in n is:"<<digits;
}



