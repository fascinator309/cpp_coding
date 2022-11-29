//							space						num	
    // 1                     =r-row no.     		    below
   // 121						
  // 12321
 // 1234321
                          // #self done
#include<iostream>
using namespace std;

int main(){
int r;
cout<<"enter\nrow:";
cin>>r;


for(int i=1; i<=r;i++){ 
   for(int j=1;j<=r-i;j++){
  
	cout<<" ";
	}
	for(int j=1;j<=i;j++){
	cout<<j;
	}
	for(int k=i-1;k>0;k--){
		cout<<k;
	
	}
		cout<<endl;

	}
	}
	
