#include<iostream>
using namespace std;
int main(){
	int array[]={7,8,9,10};
	// cout<<array[0]<<endl;
// 
// cout<<sizeof(array)<<endl;


	// print using loops 
	// for loop
	// for(int i=0;i<4;i++){
		// cout<<array[i]<<endl;
	// }
// 
	// // while loop
	// int i=0;
	// while(i<4){
		// cout<<array[i]<<endl;
// i++;
	// }

	// for each loop
	for(int i:array) {    // drawback is print all elments 
		cout<<i<<endl;
	}
}
