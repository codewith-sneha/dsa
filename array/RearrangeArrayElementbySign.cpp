#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// Input: [3, 1, -2, -5, 2, -4]
// Expected output: [3, -2, 1, -5, 2, -4]

vector<int> arr = {3, 5, 7, -2, -4, -6};
int n = arr.size();

void print(vector<int> arr){
     for(int i : arr){
        cout<<i<<" ";
    }
    cout<<'\n';
}

void bruteForceApproach(){
    vector<int>v1,v2,ans;
    for(int i =0;i<n;i++){
        if(arr[i]<0){
            v2.push_back(arr[i]);
        }
        else{
            v1.push_back(arr[i]);
        }
    }
    int i =0,j=0;
    while(i<v1.size() && j<v2.size()){
        ans.push_back(v1[i]);
        ans.push_back(v2[j]);
        i++;
        j++;
    }
    while(i<v1.size()){
        ans.push_back(v1[i]);
        i++;
    }
    while(j<v2.size()){
        ans.push_back(v2[j]);
        j++;
    }
    print(ans);
}

void betterApproach(){
    vector <int> ans(n);
    int i =0,j=1,k=0;
    while(k<n){
        if(arr[k]<0){
            ans[j]=arr[k];
            k++;
            j+=2;
        }
        else{
            ans[i]=arr[k];
            k++;
            i+=2;
        }
    }
    print(ans);
}

int main(){
    bruteForceApproach();
    betterApproach();
    return 0;
}