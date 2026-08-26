#include<iostream>
using namespace std;

int arr[5]={6,3,5,9,2};
int n=5;

void print(){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
}

void swap(int n1,int n2){
       int temp =n1;
        n1=n2;
        n2=temp;
}

//TC - O(n*n)
void selection(){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
             swap(arr[i],arr[j]);
            }
           
        }
    }
    print();
}

// void bubble(){
// for(int i=n;i>0;i--){
    
// }
// }

int main(){
    selection();
}