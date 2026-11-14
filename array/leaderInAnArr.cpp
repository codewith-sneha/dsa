#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

// An element is called a leader if it is strictly greater than every element to its right.
// arr = [4, 7, 1, 0]
// Output: [7, 1, 0]


vector<int> arr = {4, 7, 1, 0};
int n =arr.size();

void print(vector<int> arr){
     for(int i : arr){
        cout<<i<<" ";
    }
    cout<<'\n';
}

// TC - O(n^2) , SC- O(n)
void bruteForceApproach(){
    bool flag=true;
    vector <int> leaders;
    for(int i =0;i<n;i++){
        flag=true;
        for(int j=i+1;j<n;j++){
            if(arr[i]<=arr[j]){
                flag=false;
                break;
            }
        }
        if(flag==true){
            leaders.push_back(arr[i]);
        }
    }    
    cout<<"Leaders in the array are: ";
   print(leaders);
}


// TC - O(n) , SC- O(n)
void optimalApproach(){
    vector<int> leaders;
    if(n==0){
        cout<<"Array is empty\n";
        return;
    }
    int maxFromRight = arr[n-1];
    leaders.push_back(maxFromRight);
    for(int i=n-2;i>=0;i--){
        if(arr[i]>maxFromRight){
            maxFromRight=arr[i];
            leaders.push_back(maxFromRight);
        }
    }
    cout<<"Leaders in the array are: ";
    reverse(leaders.begin(),leaders.end());
    print(leaders);
}

int main(){
    bruteForceApproach();
    // betterApproachUsingSorting();
    optimalApproach();
}