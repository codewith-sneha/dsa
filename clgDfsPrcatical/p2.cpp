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

void insertElement(int pos, int element){
    if(pos>n1+1 || pos<1){
        cout<<"Invalid position"<<'\n';
        return;
    }
    if(n1==8){
        cout<<"Array is full"<<'\n';
        return;
    }
    for(int i=n1-1;i>=pos-1;i--){
        a1[i+1]=a1[i];
    }
    a1[pos-1]=element; // pos-1 because array index starts from 0
    n1++;
    }


    int main(){
                printArray(arr,n);
        insertElement(2,5);
        printArray(arr,n);
    }