#include<iostream>
using namespace std;
int main(){
	int a=8;
	cout<<(~a)<<endl; // ??????? WRONG ANSWER
	cout<<(a<<1)<<endl;//5*2=10
	cout<<(a>>1)<<endl;//5/2=2
	int b=8;
	cout<<(a|b)<<endl;//0101|1000=1101=13
	cout<<(a&b)<<endl;//0101&1000=0000=0        
	cout<<(a^b)<<endl;//0101^1000=1101=13
	
	
}
