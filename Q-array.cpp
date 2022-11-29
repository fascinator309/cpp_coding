// find the difference b/w sum of ever index place
 // to sum to odd index place of the array

#include<iostream>
using namespace std;
int main(){
	int array[]={0,1,2,3,4,5,6,7};

int even=0;
int odd=0;
for(int i=0;i<8;i=i+2){
	even+=array[i];
}
for(int i=1;i<8;i=i+2){
  odd+=array[i];
  }
cout<<"ans:"<<even-odd<<endl;     //ans =-4
}
