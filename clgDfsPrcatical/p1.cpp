#include<iostream>
using namespace std;

int arr[5]={6,13,13,9,61};
int n=5;


void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
}

void sortArrayAsc(){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void sortArrayDesc(){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    printArray(arr , n);
    sortArrayAsc();
printArray(arr , n);
    sortArrayDesc();
    printArray(arr , n);
}