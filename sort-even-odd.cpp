//sort the given array which have starting with even and then odd....

#include<iostream>
#include<vector>
using namespace std;

void sortArray(vector <int> &v){
	int leftPtr=0;
	int rightPtr=v.size()-1;

	while(leftPtr<rightPtr){
		if(v[leftPtr]%2!=0 && v[rightPtr]%2==0){
			swap(v[leftPtr],v[rightPtr]);
		}
		if(v[leftPtr]%2==0){
			leftPtr++;
		}
		if(v[rightPtr]%2!=0){
			rightPtr--;
		}
	}
	return;
}

int main(){
   
vector <int> v(8);

	cout<<"enter 8 no. :"<<endl;
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
