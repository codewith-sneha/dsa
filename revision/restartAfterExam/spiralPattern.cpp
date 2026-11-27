#include<iostream>
using namespace std;

vector<vector <int>> arr{{1,2,3,4},{5,6,7,8,},{4,3,2,1}};
int m = arr.size();
int n =arr[0].size();

void printArr(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
}

void printSpiral(){
    int top=0, left=0 , right = n-1, bottom=m-1;
    vector<int> ans;
    while(top<=bottom && left<=right){
        for(int i =left;i<=right;i++){
            ans.push_back(arr[top][i]);
        }
        top++;
        for(int i =top;i<=bottom ;i++){
            ans.push_back(arr[i][right]);
        }
        right--;
        if(top<=bottom)
        {for(int i=right;i>=left;i--){
            ans.push_back(arr[bottom][i]);
        }}
        bottom--;
        if(left<=right)
        {for(int i =bottom;i>=top;i--){
            ans.push_back(arr[i][left]);
        }}
        left++;
        
    }
    printArr(ans);
}

int main(){
    printSpiral();
}