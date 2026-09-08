// leetcode problem : https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/2135249051/

#include<iostream>
#include <unordered_set>
using namespace std;

int arr[8]={1,2,2,3,4,4,4,6};
int n=8;

void print(){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// TC : O(n) and SC : O(1)
void optimalApproach(){
    int index=0;
    for(int i=1;i<n;i++){
        if(arr[index]!=arr[i]){
            index++;
            arr[index]=arr[i];
        }
    }
    for(int i=index+1;i<n;i++){
        arr[i]=0;
    }
}


// TC : O(n) and SC : O(n)
void bruteForce(){
    unordered_set<int> seen;
    int index=0;
    for(int i=0;i<n;i++){
        if(seen.find(arr[i])==seen.end()){
            seen.insert(arr[i]);
            arr[index]=arr[i];
            index++;
        }
    }
    for(int i=index;i<n;i++){
        arr[i]=0;
    }
}

int main(){
    bruteForce();
    // optimalApproach();
    print();
    
}