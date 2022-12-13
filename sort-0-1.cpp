//sort the given array which have starting with 0 and then 1....

#include<iostream>
#include<vector>
using namespace std;

void sortArray(vector <int> &v){
	int leftPtr=0;
	int rightPtr=v.size()-1;

	while(leftPtr<rightPtr){
		if(v[leftPtr]==1 && v[rightPtr]==0){
			v[leftPtr++]=0;
			v[rightPtr--]=1;
		}
		if(v[leftPtr]==0){
			leftPtr++;
		}
		if(v[rightPtr]==1){
			rightPtr--;
		}
	}
	return;
}

int main(){
   
vector <int> v(8);

	cout<<"enter 8 no.(only 0 and 1) :"<<endl;
	for(int i=0;i < 8;i++){
		cin>>v[i];
	}
	
		sortArray(v);
						cout<<"sorted array:";
								for(int i=0;i<8;i++){
									cout<<v[i]<<" ";
									}
									cout<<endl;			
	
}
