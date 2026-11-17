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
    }
