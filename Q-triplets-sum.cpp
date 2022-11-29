//Q. find the total of pairs of triplets whose sum is equal to given x

#include<iostream>
using namespace std;
int main(){
int array[9];

  cout<<"enter 9 no.s :"<<endl;
    for(int i=0;i<9;i++){
        cin>>array[i];
    }
    int x;
    cout<<"enter the value of x:";
    cin>>x;
    int triplets=0;
        for(int i=0;i<9;i++){
            for(int j=i+1;j<9;j++){
            for(int k=i+2;k<9;k++){
            if(array[i]+array[j]+array[k]==x){
            	triplets++;
            }
            }
            }
            }
		cout<<"total of pairs of triplets whose sum is equal to given x="<<x<<" is:"<<triplets<<endl;
		}
