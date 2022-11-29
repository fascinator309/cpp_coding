// find the unique no. in array which is not in the pairs
// ans----using value MANIPULATION-(GIVE differnent value)
#include<iostream>
using namespace std;
int main(){
	int array[5];
	cout<<"enter 5 no.:"<<endl;
	for(int i=0;i<5;i++){
	cin>>array[i];
	}
	for(int i=0;i<5;i++){
       	for(int j=i+1;j<5;j++){
          if(array[i]==array[j]){
          	array[i]=0;
          	array[j]=0;
          }
          }
          }

  			for(int i=0;i<5;i++){
          if(array[i]!=0){
          cout<<"unique no. is:"<<array[i]<<endl;
         
          	          }
          	}
          	
          
}
