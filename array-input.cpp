#include<iostream>
using namespace std;
int main(){
	int array[4];
	// for(int i=0;i<4;i++){
		// cout<<array[i]<<endl;  //print garbage
	// }

// input using loops
// for loop
	// for(int i=0;i<4;i++){
		// cin>>array[i];
	// }

	// for each loop
	for(int &i:array){
		cin>>i;
	}

	// output
	for(int i=0;i<4;i++){
			cout<<array[i]<<" ";  
		}
	
}
