#include<iostream>
using namespace std;

// Input: arr = [1, 2, 3, 1, 1, 1, 0] , K = 3
// Output:4

vector<int> arr = {1, 2, 3, 1, 1, 1,1};
int k = 3,n=arr.size();

// Time: O(n*n) , Space: O(1)
void bruteForceApproach(){
    int sum=0 , maxCount=0 , count=0;
    for(int i =0;i<n;i++){
        sum=arr[i];
        count=1;
        for(int j=i+1;j<n;j++){
            sum+=arr[j];
            count+=1;
            if(sum==k){
                maxCount=max(maxCount,count);
            }
            else if(sum>k){
                break;
            }  
            
             
        }
    }
    cout<<"Maximum count of subarray with sum "<<k<<" is: "<<maxCount<<'\n';
}

void print(){
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<'\n';
}

// Time: O(n) , Space: O(1)
void optimalApproach(){
    int i=0,j=0;
    int sum=arr[i] ,maxcount=0 ;
    while(j<n && i<=j){
        if(sum==k){
            maxcount=max(maxcount,j-i+1);
            sum-=arr[i];
            i++;
              j++;
            if(j < n){
        sum += arr[j];
    }
        }
        else if(sum<k){
            j++;
            if(j < n){
        sum += arr[j];
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
    print();
    bruteForceApproach();
    optimalApproach();
}