#include<iostream>
using namespace std;
int main(){
    int r1,c1;
    cin>>r1,c1;

    int A[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>A[i][j];
        }
    }
    
    int r2,c2;
    cin>>r2,c2;
    int B[r2][c2];
     for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>B[i][j];
        }
    }
    if(c1!=r2){
     cout<<"invalid matrix for multiplication";
     return 0;
    }

    
     int ansArray[r1][c2];
     
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){  
            for(int k=0;k<c1;k++){
                ansArray[i][j]+=A[i][k]*B[k][j];
            }
        }
        
    }
    
     for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
           cout<<ansArray[i][j]<<" ";
        }
        cout<<endl;
        }

}

// i= 0 ;j=1   ;i=0 ;k=1 * k=1;j=1 ;   