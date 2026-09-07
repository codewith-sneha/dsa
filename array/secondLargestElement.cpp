#include<iostream>
using namespace std;

int n =5;
int arr[5]={2,3,4,8,5};
vector<int> a= {3,6,84,3,57,8};

// TC : O(nlogn) for using sorting 
void bruteForce(){
    sort(a.begin(),a.end());
    cout<<"second largest elemnt in array : "<<a[a.size()-2]<<'\n';
    cout<<"second smallest element in array : "<<a[1]<<'\n';
}

// TC : O(n) for using  single traversal of array twice
void betterApproach(){
    int largest=INT_MIN;
    int secondLargest=INT_MIN;
    int smallest=INT_MAX;
    int secondSmallest=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]<largest && arr[i]>secondLargest){
            secondLargest=arr[i];
        }
        if(arr[i]>smallest && arr[i]<secondSmallest){
            secondSmallest=arr[i];
        }
    }
    cout<<"second largest element in array : "<<secondLargest<<'\n';
    cout<<"second smallest element in array : "<<secondSmallest<<'\n';
}

void optimalApproach(){
     int largest=INT_MIN;
    int secondLargest=INT_MIN;
    int smallest=INT_MAX;
    int secondSmallest=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondLargest && arr[i]!=largest){
            secondLargest=arr[i];
        }
        if(arr[i]<smallest){
            secondSmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]<secondSmallest && arr[i]!=smallest){
            secondSmallest=arr[i];
        }
    }
    cout<<"second largest element in array : "<<secondLargest<<'\n';
    cout<<"second smallest element in array : "<<secondSmallest<<'\n';
}

int main(){
    if(n==1){
        cout<<"second largest and second smallest element is not possible in array of size 1"<<'\n';
        return 0;
    }
    bruteForce();
    betterApproach();
    optimalApproach();
}