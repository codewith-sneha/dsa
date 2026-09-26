#include<iostream>
#include<map>
using namespace std;

void perfectNum(int n){
    int sum=0;
    for(int i =1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        cout<<"yes it is a perfect num ";
    }
}

int main(){
    perfectNum(4);
}
