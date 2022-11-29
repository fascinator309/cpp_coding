// find no. of times x=1 occur...

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={2,1,2,3,2,1,3,1,5,5};

    int times=0;
    for(int i=0;i<10;i++){
    	if(v[i]==1){
    		times++;
    	}
    }
    cout<<"x=1 occur:"<<times<<" times"<<endl;
    }
    
