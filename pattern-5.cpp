//					space                   stars
     // *			  3   =r-row-no.          1  =2(row-no.)-1
    // ***            2                       3
   // *****           1                       5
  // *******          0                       7

#include<iostream>
using namespace std;

int main(){
int r;
cout<<"enter\nrow:";
cin>>r;

for(int i=1; i<=r;i++){
	for(int j=1;j<=r-i;j++){
		cout<<" " ;
		}
	for(int j=1;j<=2*i-1;j++){
		cout<<"*" ;
	    }
	    cout<<endl;
	
}

}

