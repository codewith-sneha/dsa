#include<iostream>
using namespace std;

int arr[5]={6,13,23,39,61};
int n=5;        


// TC : O(n*n)
void bruteForce(){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                cout<<"Array is not sorted in ascending order"<<'\n';
                return;
            }
        }
    }
     cout<<"Array is sorted in ascending order"<<'\n';
}

// TC : O(n)
void optimalApproach(){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            cout<<"Array is not sorted in ascending order"<<'\n';
            return;
        }
    }
    cout<<"Array is sorted in ascending order"<<'\n';
}

int main(){
    bruteForce();
    optimalApproach();
}