#include<iostream>
using namespace std;

void countOddDigit(int num){
    int count =0 , n=num;
    while(n!=0){
        int rem  = n%10;
        if(rem%2!=0){
            count++;
        }
        n/=10;
    }
    cout<<"count of Odd Digits : "<<count;
}

int main(){
    int num = 233547;
    countOddDigit(num);
}