// 123456
// 1    6
// 1    6
// 123456

#include<iostream>
using namespace std;

int main(){
int r,c;
cout<<"enter\nrow:";
cin>>r;
cout<<"column:";
cin>>c;


for(int i=1; i<=r;i++){
for(int j=1;j<=c;j++){
    if(i==1 || j==1 || i==r ||j==c){
    	cout<<j;
    }else{
    	cout<<" ";
    }	
}
    cout<<endl;

  }
}



