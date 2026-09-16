#include<iostream>
using namespace std;


vector <int> nums ={2,3,4,5,6,7};

void print(){
    for(int i : nums){
        cout<<i<<" ";
    }
    cout<<'\n';
}

void leftRotateByOne(){
    int temp=nums[0];
    int n=nums.size();
    for(int i=1;i<n;i++){
        nums[i-1]=nums[i];
    }
    nums[n-1]=temp;
}

int main(){
    leftRotateByOne();
    print();
}