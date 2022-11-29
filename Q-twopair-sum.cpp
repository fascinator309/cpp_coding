// Q. find the total no. of  pair whose sum is equal to given x

#include<iostream>
using namespace std;
int main(){
int array[6];

  cout<<"enter 6 no.s :"<<endl;
	for(int i=0;i<6;i++){
		cin>>array[i];
	}
	int x;
	cout<<"enter the value of x:";
	cin>>x;
	int pairs=0;
    	for(int i=0;i<6;i++){
		  	for(int j=i+1;j<6;j++){
		  	
			if(array[i]+array[j]==x){
			pairs++;
			}
			
			}
			}
			cout<<"total no. of pair whose sum is equal x="<<x<<" is:"<<pairs<<endl;
}
