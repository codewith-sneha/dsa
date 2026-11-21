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

void generate(int numRows){
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

int main(){
generate(4);

}