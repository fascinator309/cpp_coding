// 12121212
// 21212121
// 12121212
// 21212121

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
   if((i+j)%2==0){
   	cout<<"1";
   }else{
   	   	cout<<"2";

   }
   }
   cout<<endl;
   }
   }
