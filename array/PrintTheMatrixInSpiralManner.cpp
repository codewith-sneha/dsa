// https://leetcode.com/problems/spiral-matrix/submissions/2201272402/
#include<iostream>
using namespace std;

vector<vector<int>> sparse;

int arr[3][4]={{1,4,0,6},{1,6,4,0},{2,1,3,0}};
int m=3,n=4;

void print(vector<int> &arr){
for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void spiralPrint(){
    vector<int> ans;
    int top=0 , left=0,right=n-1,bottom=m-1;
    while(top<=bottom && left <=right){
        for(int i =left; i<=right;i++){
            ans.push_back(arr[top][i]);
        }
        top++;
        for(int i = top ;i<=bottom ;i++){
            ans.push_back(arr[i][right]);
        }
        right--;
        if(top<=bottom)
        {for(int i = right ;i>=left;i--){
            ans.push_back(arr[bottom][i]);
        }}
        bottom--;
        if(left<=right){
        for(int i =bottom ;i>=top;i--){
            ans.push_back(arr[i][left]);
        }
    }
        left++;
    }
    print(ans);
}

    int main(){
        spiralPrint();
    }
