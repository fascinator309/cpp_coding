						// space					middle space	
   // 1						=r-row no.				0	
  // 2 2											1	=2*i-3
 // 3   3											3
// 4444444											5
							//	#self done 
#include<iostream>
  using namespace std;
 
 int main(){
 int r;
 cout<<"enter\nrow:";
 cin>>r;

for(int i=1; i<=r;i++){
	for(int j=1 ; j<=r-i; j++){
		cout<<" ";
	}
	for(int j=i ; j<=i;j++){
		cout<<j;
	}if(i!=r && i!=1){
	for(int j=1;j<=2*i-3;j++){
		cout<<" ";
	}
	
	for(int j=i ; j<=i;j++){
			cout<<j;
		}
	}if(i==r){
	for(int j=1;j<=2*i-2;j++){
		cout<<i;
	}	
	}
	
	cout<<endl;
}
}

 
