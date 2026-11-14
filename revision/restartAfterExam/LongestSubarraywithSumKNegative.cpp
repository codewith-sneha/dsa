#include<iostream>
#include<map>
using namespace std;

vector <int> arr = {1, -1, 5, -2, 3};
int k = 3,n=arr.size();

void print(){
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<'\n';
}

void longestSubarraywithSumK(){
    int sum=0,maxCount=0;
    map<int,int> mp;
    mp[0]=-1;
    int i =0,j=0;
    for(int i =0;i<n;i++){
        sum+=arr[i];
        int target = sum-k;
        if(mp.find(target)!=mp.end()){
            maxCount=max(maxCount , i-mp[target]);
        }
        if(mp.find(sum)==mp.end()){
            mp[sum]=i;
        }
    }
}

int main(){
    longestSubarraywithSumK();
    return 0;
}