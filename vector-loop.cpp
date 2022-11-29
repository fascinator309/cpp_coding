#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int>v;
// for loop
	// for(int i=0;i<5;i++){
	// int element;
	// cin>>element;
	// v.push_back(element);
    								//	or   // cin>>v[i];
	// }

	// // for each loop
	// for(int &element:v){         // segmentation fault??
		// cin>>element;
	// }
	int i=0;
	while(i<5){
	int element;
	cin>>element;
	v.push_back(element);
	i++;
	}
	v.insert(v.begin()+2,7);
	v.erase(v.end()-2);


	
		for(int i=0;i<5;i++){
		cout<<v[i]<<" ";
		}
	
	
}
