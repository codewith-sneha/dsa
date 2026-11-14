// https://leetcode.com/problems/majority-element/submissions/2194661331/
#include<iostream>
#include<map>
using namespace std;

vector <int> arr = {2, 2, 1, 1, 1, 2, 2};
int n =arr.size();

//TC - O(nlogn) SC- O(n)
void optimalApproach(){
    map<int, int> mp;
    for(int i =0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto it:mp){
        if(it.second>n/2){
            cout<<"Majority element is: "<<it.first<<'\n';
            return;
        }
    }
    cout<<"No majority element found\n";
}

// TC -O(N) , SC- O(1)
void mooreVotingAlgorithm(){
    int count =0,candidate=-1;
    for(int i=0;i<n;i++){
        if(count==0){
            candidate=arr[i];
        }
       if(candidate==arr[i]){
        count++;
       }
       else{
        count--;
       }
    }
    // a majority is guaranteed so directly printing the candidate without checking its count
    cout<<"Majority element is: "<<candidate<<'\n';

     // when a majority isn't guaranteed, we must traverse the array again and count the candidate's actual occurrences.
    int freq = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == candidate){
            freq++;
        }
    }
    if(freq > n/2){
        cout << candidate;
    }
    else{
        cout << "No majority element";
    }
}

int main(){
    optimalApproach();
    mooreVotingAlgorithm();
}