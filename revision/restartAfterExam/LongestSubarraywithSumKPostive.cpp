#include<iostream>
using namespace std;

vector <int> arr = {1, -1, 5, -2, 3};
int k = 3,n=arr.size();

void print(){
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<'\n';
}

void optimalApproach(){
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

void optimalApproach(){
    int i =0,j=0,sum=arr[i],maxcount=0;
    while(j<n && i<=j){
        if(sum==k){
            maxcount=max(maxcount,j-i+1);
            sum-=arr[i];
            i++;
            j++;
            if(j<n){
                sum+=arr[j];
            }
        }
        else if(sum<k){
            j++;
            if(j<n){
                sum+=arr[j];
            }
        }
        else{
            sum-=arr[i];
            i++;
        }
    }
    cout<<"Maximum count of subarray with sum "<<k<<" is: "<<maxcount<<'\n';
}

int main(){
    optimalApproach();
    optimalApproach();
    return 0;
}
