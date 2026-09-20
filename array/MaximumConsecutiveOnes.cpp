#include<iostream>
using namespace std;

// Input:  [1,1,0,1,1,1]
// Output: 3

vector <int> arr = {1,0,1,1,1,1,0,1,1,0};
int n=arr.size();

void print(){
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<'\n';
}

void brute(){
int count=0,max_count=0;
    for (int i = 0; i < n; i++) {
    if (arr[i] == 1) {
        int count = 0;

        for (int j = i; j < n && arr[j] == 1; j++) {
            count++;
        }

        max_count = max(max_count, count);
    }
}
}

void optimal(){
    int count=0,max_count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count=0;
        }
        else{
            count++;
        }
        max_count=max(max_count,count);
    }
    cout<<"maximum consecutive ones : "<<max_count;
}

int main(){
    print();
    optimal();
}