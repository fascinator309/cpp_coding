#include<iostream>
#include<vector>
using namespace std;

int main(){
   vector<int>v;

    cout<<"enter 6 elements in array:"<<endl;
    for(int i=0;i<6;i++){
        // cin>>v[i];
        int elements;
        cin>>elements;
        v.push_back(elements);
    }
string ans="given array is sorted ";
    for(int i=0;i<5;i++){
     if(v[i]>=v[i+1]){
     	ans="given array is not sorted";
     	break;
     }
     }
     cout<<ans<<endl;
     }
    
