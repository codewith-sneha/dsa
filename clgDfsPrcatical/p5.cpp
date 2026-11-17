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


void commonElemntBetwenTwoArray(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n1;j++){
            if(arr[i]==a1[j]){
                cout<<"Common element found : "<<arr[i]<<'\n';
                return;
            }
        }
    }
    cout<<"No common element found"<<'\n';
}

    int main(){
                printArray(arr,n);
        commonElemntBetwenTwoArray();
    }