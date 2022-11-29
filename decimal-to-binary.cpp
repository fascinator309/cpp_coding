#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter decimal:";
	cin>>n;

	int ans=0;
	int a=1;
	while(n>0){
		int parity_digit=n%2;
		ans+=parity_digit*a;
		a*=10;
		n/=2;
	}
	cout<<endl<<"in binary :"<<ans;
}
