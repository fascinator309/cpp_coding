#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> v(5);
	int n=5;
		cout<<"enter 5 no."<<endl;
		for(int i=0;i<5;i++){

		cin>>v[i];
		}
		int k;
		cout<<"enter the no. of steps for rotating ,k:";
		cin>>k;
		k%=n;
		reverse(v.begin(),v.end());
		reverse(v.begin(),v.begin()+k);
		reverse(v.begin()+k,v.end());

        for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
		}
		cout<<endl;
		

			
}
