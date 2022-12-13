// Given queries , find the mo. is present in the no. or not...
// note:- values of all elements in the array is less than 10 to the power 5

#include<iostream>
#include<vector>
using namespace std;
                                  // abhi tak samajha me nhi aya ...
int main(){
	int size=5;
	vector<int> v(5);
	cout<<"enter 5 no.:"<<endl;
	for(int i=0;i<size;i++){
		cin>>v[i];
	}
	const int N =1e5+10;    //scientific notation for write 10 to the power 5
   
 vector <int> freq(N,0);   //freq array is of size 10^5 and initializing freq array with 0
 for(int i=0;i<size;i++){
 	freq[v[i]]++;
 }

 cout<<"enter queries: ";
 int q;
 cin>>q;

    while(q--){
    	int queryelement ;
    	cin>>queryelement;
    	cout<<freq[queryelement]<<" times"<<endl;
    }
}
