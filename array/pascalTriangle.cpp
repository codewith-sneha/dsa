// https://leetcode.com/problems/pascals-triangle-ii/submissions/2201269530/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

void print(vector<vector<int>> &arr){
    for(int i =0;i<arr.size();i++){
        for(int j =0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<'\n';
    }
}

//TC - O(N*N) SC-O(N*N)
void generateUsingPrevRow(int numRows){
    if(numRows<=0){
        return;
    }
    vector<vector<int>> ans;
    int n =1;
    ans.push_back({1});
    while (n<numRows)
    {
        vector<int> row;
        row.push_back(1);
        vector<int> prevRow = ans[ans.size()-1];
        for(int i=0;i<prevRow.size()-1;i++){
            row.push_back(prevRow[i]+prevRow[i+1]);
        }
        row.push_back(1);
        ans.push_back(row);
        n++;
    }
    print(ans);
}

//TC - O(N*N) SC-O(N*N)
void generateUsingPrevElemnt(int numRows){
     if(numRows<=0){
        return;
    }
    vector<vector<int>> ans;
    int n =1;
    ans.push_back({1});
    while (n<numRows)
    {
        vector<int> row;
        long long current =1;
        row.push_back(1);   
        for(int i =1;i<=n;i++){
            current=current* (n - i + 1) / i;
            row.push_back(current);
        }
 
         ans.push_back(row);
         n++;
    }
    print(ans);
    
}

int main(){
generateUsingPrevRow(4);
generateUsingPrevElemnt(4);
}