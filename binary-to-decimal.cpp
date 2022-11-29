#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter binary:";
	cin>>n;

 	int ans=0;
	int power=1;
	while(n>0){
	int last_digits=n%10;
	ans+=last_digits*power;
	power*=2;
	n=n/10;
	}

	cout<<endl<<"in deciaml:"<<ans;
	
}
