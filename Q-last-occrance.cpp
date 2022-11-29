// find the last occurance of element x in given array
//   x=1   vector{2,1,2,3,2,1,3,1,5,5}
// means find last positon of given x

#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>v={2,1,2,3,2,1,3,1,5,5};

	// int position=-1;
	// for(int i=0;i<10;i++){
		// if(v[i]==1){
		// position=i;
		// }

	int position=-1;
	for(int i=9;i>=0;i--){
		if(v[i]==1){
		position=i;	
		break;
		}
	}
	cout<<"last of occurance of x=1 is :"<<position<<endl;
}
