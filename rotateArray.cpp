//using second array....

#include<iostream>
using namespace std;

int main(){
	int array[5];
	int n=5;
		cout<<"enter 5 no."<<endl;
		for(int i=0;i<5;i++){
		cin>>array[i];
		}
		int k;
		cout<<"enter the no. of steps for rotating ,k:";
		cin>>k;
		k%=n;
	int newarray[n];
	int j=0;
		for(int i=n-k;i<5;i++){
		newarray[j++]=array[i];
		}
		for(int i=0;i<=k;i++){
			newarray[j++]=array[i];
		}
		for(int i=0;i<n;i++){
			cout<<newarray[i]<<" ";
		}
		cout<<endl;
}
