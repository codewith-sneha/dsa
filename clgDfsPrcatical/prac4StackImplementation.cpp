//stack implementation
#include<iostream>
using namespace std;

int arr[5];
int top=-1 , n=5;

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
}

bool isEmpty(){
    if(top==-1){
        return;
    }
}

bool isFull(){
    if(top==n-1){
        return true;
    }
}

void push(int val){
    if(isFull()){
        cout<<"stack overflow";
        return;
    }
    top++;
    arr[top]=val;
    cout<<"value pushed sucessfully";
}

void pop(){
    if(isEmpty()){
        cout<<"stack underflow";
        return;
    }
    top--;
}

int peek(){
    if(isFull()){
        cout<<"stack overflow";
        return;
    }
    return arr[top];
}

int main(){

}