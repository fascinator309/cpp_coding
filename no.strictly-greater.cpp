// find the no. of elements strictly greater than x

#include<iostream>
#include<vector>
using namespace std;

int main(){
   vector<int>v;
  
	cout<<"enter 6 elements in array:"<<endl;
	for(int i=0;i<6;i++){
		// cin>>v[i];
		int elements;
		cin>>elements;
		v.push_back(elements);
	}

int x;
	cout<<"enter x:";
	cin>>x;

int times=0;
	for(int i=0;i<6;i++){
	if(v[i]>x){
		times++;
	}
}				
cout<<"no. of elements strictly greater than x is :"<<times<<endl;
}
