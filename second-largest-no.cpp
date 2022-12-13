#include<iostream>
using namespace std;

// int largestNo_Index(int array[]){
	// int max=INT_MIN;
	// int greatest_index;
	// for(int i=0;i<5;i++){          fail when dublicate of max no. 
	     // if(array[i]>max){         is present 
	     	// max=array[i];
	    // greatest_index=i;
	     // }
	     // }
	     // return greatest_index;
        // }
        int secondLargestNo(int array[]){
        	int max=INT_MIN;
        	int secondLar=INT_MIN;	
          	for(int i=0;i<5;i++){
          		if(array[i]>max){
          			max=array[i];
          		}
          		}
              	for(int i=0;i<5;i++){
				if(array[i]>secondLar && array[i]!=max){
          			secondLar=array[i];
          		}
          		}
          		
        	return secondLar;
        }

	int main(){
	int array[5];
	cout<<"enter 5 no."<<endl;
	for(int i=0;i<5;i++){
	cin>>array[i];
	}

     // int indexOfLargest=largestNo_Index(array);
     // array[indexOfLargest]=0;
     // indexOfLargest=largestNo_Index(array);

     
     cout<<"second largest no. is :"<<secondLargestNo(array)<<endl;

	
}
