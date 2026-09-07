#include<iostream>
using namespace std;

int n=5;
int arr[5]={2,5,13,6,9};
vector<int> a = {3,7,5,86,43,5};

// TC : O(n)
void optimal(){
    int largest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"Largest element in the array is : "<<largest<<'\n';
}

// TC - o(nlogn)
void brute(){
    sort(a.begin(), a.end());
    cout<<"Largest element in the vector is : "<<a[a.size()-1]<<'\n';
}

int main(){
    brute();
    optimal();
}