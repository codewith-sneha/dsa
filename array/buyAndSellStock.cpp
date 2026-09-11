// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
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

int maxProfitOptimal(vector<int>& prices) {
        int mn=prices[0], profit=0;
        for(int i =1;i<prices.size();i++){
            profit=max(profit,prices[i]-mn);
            mn=min(mn,prices[i]);
        }
        return profit;
    }

int main(){
    vector<int> arr = {7,1,5,3,6,4};
    maxProfitBruteForce(arr);
    cout<<"profit : "<<maxProfitOptimal(arr);
}