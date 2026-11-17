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
void deleteElementAtPos(int pos){
    if(pos>n1 || pos<1){
        cout<<"Invalid position"<<'\n';
        return;
    }
    for(int i=pos-1;i<n1-1;i++){
        a1[i]=a1[i+1];
    }
    a1[n1-1]=0; 
    n1--;
}

    int main(){
                printArray(arr,n);
        deleteElementAtPos(2);
        printArray(arr,n);
    }