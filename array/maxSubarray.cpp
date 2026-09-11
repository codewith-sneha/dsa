// https://leetcode.com/problems/maximum-subarray/submissions/2138694373/
#include<iostream>
using namespace std;


//tc : O(n*n)
int maxSubArrayBrute(vector<int>& nums){
    int maxsum = INT_MIN;
    int n = nums.size();
    
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += nums[j];  // extend subarray from i
            maxsum = max(maxsum, sum);
        }
    }
    return maxsum;
}

//tc : O(n)
//kedane algo 
int maxSubArray(vector<int>& nums) {
     int sum =0, maxsum =INT_MIN;
     for(int i =0;i<nums.size();i++){
        sum+=nums[i];
        maxsum=max(maxsum,sum);
        if(sum<0){
            sum=0;
        }
     }   
     return maxsum;
    }

int main(){
    vector<int> arr = {2,-3,4,0,-5,-1,3 , 1};
    maxSubArray(arr);
}