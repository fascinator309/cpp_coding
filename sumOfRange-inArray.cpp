// given an array of integers of size n . Answer q queries where you need 
// to print the sum of values in a given range of indices from l to r (both included)
// NOTE:- l and r is in 1 based indexing 

#include<iostream>
using namespace std;
                            // mam had done in complex way , can't understand
int main(){
int n;
	cout<<"enter size of array n:";
	cin>>n;
	int array[n];
	cout<<"enter no. in array :"<<endl;
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	int l,r;
	cout<<"enter the value of l and r:"<<endl<<"l:";
	cin>>l;           // here l and r is based on 1 based indexing
	cout<<"r:";
	cin>>r;
	int rangeSum=array[l-1];
	for(int i=l;i<r;i++){
		rangeSum+=array[i];
	}
	cout<<"sum of range blw l and r is :"<<rangeSum<<endl;
	
}
