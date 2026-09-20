#include<iostream>
#include<map>
using namespace std;

// Input:  [4, 1, 2, 1, 2]
// Output: 4

vector <int> arr = { 1, 2, 1, 2, 4, 4, 5};
int n=arr.size();

void print(){
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<'\n';
}

// TC :O(N) , SC :O(N)
void usingMap(){
    map<int , int> mp;
    for(int i =0;i<n;i++){
        mp[arr[i]]+=1;
    }
    for(auto it:mp){
        if(it.second == 1){
            cout<<"number apearing one : "<<it.first<<'\n';
        }
    }
}

// TC :O(N) , SC :O(1)
void usingXor(){
    int xr=0;
    for(int i =0;i<n;i++){
        xr^=arr[i];
    }
    cout<<"number apearing one : "<<xr;
}


// TC :O(N*N) , SC :O(1)
void brute(){
    for(int i =0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count+=1;
            }
        }
        if(count==1){
            cout<<"number apearing one : "<<arr[i]<<'\n';
            break;
        }
    }
}

int main(){
    print();
    brute();
    usingMap();
    usingXor();
}