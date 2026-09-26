#include<iostream>
using namespace std;

void largestNum(int n){
    int mx=0;
    while(n!=0){
        int rem = n%10;
        mx=max(mx,rem);
        n/=10;
    }
    cout<<"largest digit in num : "<<mx;
}

int main(){
    int num = 26547;   
    largestNum(num);
}