#include<iostream>
using namespace std;

int arr1[2][3]={{6,13,1},{3,4,5}};
int r1=2,c1=3;
int arr2[3][2]={{1,2},{6,4},{3,4}};
int r2=3,c2=2;

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
}


void multiplication(){
    if(c1!=r2){
        cout<<"multiplication not possible";
        return;
    }
    int ansArr[r1][c2];
    for(int i =0;i<r1;i++){
        for(int j=0;j<c2;j++){
            ansArr[i][j]=0;
            for(int k =0;k<c1;k++){
                ansArr[i][j]+= arr1[i][k]*arr2[k][j];
            }
        }
    }
cout<<"resultant array : \n";
for(int i =0;i<r1;i++){
    for(int j =0;j<c2;j++){
        cout<<ansArr[i][j]<<" ";
    }
cout<<'\n';
}
}



    int main(){
                
        multiplication();
    }