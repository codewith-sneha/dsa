#include<iostream>
using namespace std;

void hashing(){
    int n;
    cout<<"enter your array size ";
    cin>>n;
    int arr[n];
    cout<<"\nenter elements : \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    int q;
    cout<<"enter element count u want :\n";
    cin>>q;
    cout<<hash[q];
}

int main(){
    hashing();
}