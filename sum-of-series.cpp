// series : 1-2+3-4+...n

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter nth no. of the series :";
	cin>>n;
int sum=0;
	for(int i=1;i<=n;i++){
		if(i%2==0){  //even
			sum-=i;
		}
		else{  //odd
			sum+=i;
		}
	}
   cout<<endl<<"sum of series:"<<sum;
}
