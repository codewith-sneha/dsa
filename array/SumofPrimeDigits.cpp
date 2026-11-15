#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// Input: n = 333
// Output: 9
// Explanation: 3 is a prime number. It is present 3 times. So 3+3+3 = 9.

bool isPrime(int n ){
    if(n<2){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

// TC -  O(d* sqrt(digit)) where d is no of digits , SC - O(1)
int primeSumBetter(int n ){
    int sum =0;
    while(n>0){
        int digit = n%10;
        if(isPrime(digit)){
            sum+=digit;
        }
        n/=10;
    }
    return sum;
}


// TC - O(d * sqrt(digit)) , SC - O(d) where d is no of digits
int primeSum(int n ){
    int sum =0;
    string s = to_string(n);
    for(int i =0;i<s.length();i++){
        int digit = s[i]-'0';
        if(isPrime(digit)){
            sum+=digit;
        }
    }
    return sum;
}

int main(){
    cout<<primeSum(384)<<"\n";
    cout<<primeSum(866)<<"\n";
    cout<<primeSum(275)<<"\n";
    cout<<primeSumBetter(275)<<"\n";
    cout<<primeSumBetter(866)<<"\n";
}