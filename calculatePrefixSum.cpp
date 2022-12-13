#include<iostream>
using namespace std;

int main(){
int size=5;
	int array[size];
	cout<<"enter 5 no.:"<<endl;
	for(int &ele:array){
		cin>>ele;
	}

	for(int i=0;i<4;i++){
		array[i+1]=array[i]+array[i+1];
							
	}

	for(int ele:array){
		cout<<ele<<" ";
	}
	cout<<endl;
	}
