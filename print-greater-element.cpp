#include<iostream>
using namespace std;
int main(){
	int array[5];
	int size=sizeof(array)/sizeof(array[0]);
	for(int i=0;i<size;i++){
		cin>>array[i];
	}
	int greater=array[0];
	for(int i=0;i<size;i++){
		if(array[i]>greater ){
	 greater=array[i];
		}
	}
	cout<<"greater of all:"<<greater<<endl;
}
