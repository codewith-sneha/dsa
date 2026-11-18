#include<iostream>
using namespace std;

vector<vector<int>> sparse;

int arr[3][3]={{1,0,0},{6,4,0},{0,3,0}};
int n=3;

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
}

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



void sparseMat(){
    int count=0;
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(arr[i][j]!=0){
                sparse.push_back({i , j , arr[i][j]});
                count++;
            }
        }
    }
    cout << "Row\tColumn\tValue\n";

for (int i = 0; i < count; i++) {
    cout << sparse[i][0] << "\t"
         << sparse[i][1] << "\t"
         << sparse[i][2] << "\n";
}
}

    int main(){
        sparseMat();
        multiplication();
    }
