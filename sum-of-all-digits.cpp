#include<iostream>
using namespace std;
int main(){
int n;
	cout<<"enter the value of n:";
	cin>>n;

	int sum=0;
	while(n>0){
		int last_digits=n%10;
		sum+=last_digits;
		n/=10;
	}
	cout<<endl<<"sum of digits of n is:"<<sum;
}
