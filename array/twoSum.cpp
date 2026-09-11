//https://leetcode.com/problems/two-sum/
#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> twoSumBruteForce(vector<int>&nums , int target){
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                return {i,j};
            }
        }
    }
    return {};
}

vector<int> twoSumOptimal(vector<int>& nums, int target) {
        vector<int> ans;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int res = target - nums[i];
            if(mp.find(res)!=mp.end()){
                return {mp[res],i};
            }
            mp[nums[i]]=i;
        }
    return {};
}

int main(){
    vector<int> nums={2,3,32,11,5};
    vector<int>res1=twoSumBruteForce(nums,43);
    cout<<"ans  : "<<res1[0]<<" "<<res1[1]<<"\n";
    vector<int>res=twoSumOptimal(nums,8);
    cout<<"ans  : "<<res[0]<<" "<<res[1]<<"\n";
}