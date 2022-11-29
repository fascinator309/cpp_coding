#include<iostream>
using namespace std;
int main(){
	int array[]={1,2,3,4,5};
int search;
	cout<<"enter search no.:";
	cin>>search;
int ans=-1;
	for(int i=0;i<5;i++){
		if(search==array[i]){
		ans=i;
		break;    //for stop the process and save the time form whole array search
		}
	}
	cout<<ans<<endl;
}
