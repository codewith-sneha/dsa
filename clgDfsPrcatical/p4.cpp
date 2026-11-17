#include<iostream>
using namespace std;

int arr[5]={6,13,13,9,61};
int n=5;
int a1[8]={5,15,6,8,4,3,0,0};
int n1=6;

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
}


void findDuplicate(){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<"Duplicate element found : "<<arr[i]<<'\n';
                return;
            }
        }
    }
    cout<<"No duplicate element found"<<'\n'; 
}

    int main(){
                printArray(arr,n);
        findDuplicate();
        
    }