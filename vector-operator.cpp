#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int>v{1,2,3,4};

	// cout<<"size:"<<v.size()<<endl;
	// cout<<"capacity:"<<v.capacity()<<endl;

	// v.push_back(1);
		// cout<<"size:"<<v.size()<<endl;
	// cout<<"capacity:"<<v.capacity()<<endl;
// 
		// v.push_back(2);
		// cout<<"size:"<<v.size()<<endl;
	// cout<<"capacity:"<<v.capacity()<<endl;
// 
	// v.push_back(3);
		// cout<<"size:"<<v.size()<<endl;
	// cout<<"capacity:"<<v.capacity()<<endl;
// 
   v.resize(10);
   	cout<<"size:"<<v.size()<<endl;       // capacity =20 by my compiler
	cout<<"capacity:"<<v.capacity()<<endl;

// for(int i=1;i<=10;i++){     //now capicty of size 10 is 16
	// v.push_back(i);         // increasing in power of 2 for all compiler
			// cout<<"size:"<<v.size()<<endl;
		// cout<<"capacity:"<<v.capacity()<<endl;
	// 
// }
v.pop_back();
	cout<<"size:"<<v.size()<<endl;
		cout<<"capacity:"<<v.capacity()<<endl;

cout<<v[2]<<endl;
	v.insert(v.begin()+2,7);
cout<<v[2]<<endl;

}
