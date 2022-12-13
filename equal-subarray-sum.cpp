// find the two equal sum of subarray from given array ...

#include<iostream>
using namespace std;

int main(){
int size=7;
cout<<"enter 7 no.:"<<endl;
	int array[size];
	for(int &ele:array){
		cin>>ele;
	}

int totalSum=0;
for(int i=0;i<size;i++){
	totalSum+=array[i];
}
int suffixSum=totalSum/2;

int partion_i;
int prefixSum=0;
for(int i=0;i<size;i++){
   if(prefixSum!=suffixSum){
   	prefixSum+=array[i];
   	if(prefixSum==suffixSum){
   		partion_i=i;
   	}
   }
   
}
// cout<<"prefixSum:"<<prefixSum<<endl<<"suffixSum:"<<suffixSum<<endl;
   	if(prefixSum==suffixSum){
   		cout<<"subarray are :"<<endl<<"prefix array:";
   		for(int i=0;i<=partion_i;i++){
   		cout<<array[i]<<" ";	
   		}
   		cout<<endl<<"suffix array:";
   		for(int i=partion_i+1;i<size;i++){
   		cout<<array[i]<<" ";	
   		}
   		cout<<endl;
   		
   		
   	}else{
   		cout<<"no equal subarray present"<<endl;
   	}

}
