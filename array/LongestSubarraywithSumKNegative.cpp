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

// TC - O(n^2) SC- O(1)
void bruteForceApproach(){
    int sum=0 , maxcount=0 , count=0;
    for(int i =0;i<n;i++){
    sum=arr[i];
    count=1;
    if(sum==k){
            maxcount=max(maxcount,count);
        }
    for(int j=i+1;j<n;j++){
        sum+=arr[j];
        count+=1;
        if(sum==k){
            maxcount=max(maxcount,count);
        }
    }
    }
    cout<<"Maximum count of subarray with sum "<<k<<" is: "<<maxcount<<'\n';
}

// TC- 	O(n log n) SC- O(n)
void optimalApproach(){
    int maxcount=0;
    long long sum=0 , target;
    map<long long ,int> mp;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==k){
            maxcount=max(maxcount , i+1);
        }
        target=sum-k;
        if(mp.find(target)!=mp.end()){
            maxcount=max(maxcount , i-mp[target]);
        }
        if(mp.find(sum)==mp.end()){
            mp[sum]=i;
        }
    }
    cout<<"Maximum count of subarray with sum "<<k<<" is: "<<maxcount<<'\n';

}

int main(){
    bruteForceApproach();
    optimalApproach();
}