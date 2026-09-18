// https://leetcode.com/problems/move-zeroes/
#include<iostream>
using namespace std;

vector <int> arr ={1,0,2,3,2,4,0,0,1,0};
int n= arr.size();

void print(){
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<'\n';
}

void brute(){
    vector <int> temp;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            temp.push_back(arr[i]);
        }
        else{
            count++;
        }
    }
    int i;
    for( i=0;i<temp.size();i++){
        arr[i]=temp[i];
    }
    while (i<n){
        arr[i]=0;
        i++;
    }
    
}

void optimal(){
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1)
    return;

    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
}

int main(){
    // brute();
    optimal();
    print();
}