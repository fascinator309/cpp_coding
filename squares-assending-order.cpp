 // given array is in non-decreasing order , then sort the  square 
// of given array in non-decresing order ...
// NOTE:-elements of given array may be negative integers..

#include<iostream>
#include<vector>
							//pata nhi kyu for loop in main stop nhi ho raha 
using namespace std;

void sortSquareOfAbsoluteValue(vector <int> v) {
vector <int> ans;
int leftPtr=0;
int rightPtr=v.size()-1;
		while(leftPtr<=rightPtr){  
			if(abs(v[leftPtr]) < abs(v[rightPtr])){
				ans.push_back(v[leftPtr]*v[leftPtr]);
			}else{
				ans.push_back(v[rightPtr]*v[rightPtr]);
			}
			}

			cout<<"square of array in assending order:";
					// for(int ele:ans){				// for each loop is
						// cout<<ele<<" ";					//best for array output
					// }

					for(int i=0;i<6;i++){
						cout<<ans[i]<<" ";
					}
			    		cout<<endl;
			    		
			    
	return ;		
			
}

int main(){

vector <int> v;
	cout<<"enter in assending order 6 no.(also negative no.s)"<<endl;
for(int i=0;i<6;i++){
	int ele;
	cin>>ele;
	v.push_back(ele);
}

		cout<<"finished";

	sortSquareOfAbsoluteValue(v);
	
    
	
}
