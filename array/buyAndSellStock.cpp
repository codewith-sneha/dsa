#include<iostream>
using namespace std;

void maxProfitBruteForce(vector<int>&nums){
    int max_profit=0;
    for(int i=0;i<nums.size();i++){
        int max_sell=0;
        for(int j=i+1;j<nums.size();j++){
            if(nums[j]<nums[i]){
                continue;
            }
            if(max_sell<nums[j]){
                max_sell=nums[j];
            }

        }
        if(max_profit<max_sell-nums[i]){
            max_profit=max_sell-nums[i];
        }
    }
    cout<<"max profit : "<<max_profit<<'\n';
}

void optimal(vector<int>&nums){
    int start =0, end = nums.size()-1, max_profit =0;
    sort(nums.begin(),nums.end());
    while(start<=end){
        if(nums[end]-nums[start]>max_profit){
            max_profit=nums[end]-nums[start];
        }
        end--;
        start++;
    }
    cout<<"max profit : "<<max_profit;
}

int main(){
    vector<int> arr = {7,1,5,3,6,4};
    maxProfitBruteForce(arr);
    maxProfitBruteForce(arr);
}