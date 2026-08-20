#include<iostream>
using namespace std;


// Input:N = 12345
// Output:5
void countDigit(int n){
    int count=0,rem=n;
    while(rem!=0){
        count++;
        rem/=10;
    }
    cout<<count<<'\n';
}

void countDigitOptimal(int n){
    cout<<int(log10(n)+1)<<'\n';
}

int reverseNum(int n){
    int rev=0, rem=n;
    while(rem!=0){
        rev*=10;
        rev+=rem%10;
        rem/=10;
    }

    return rev;
}

void checkPalindrome(int n){
    int rev = reverseNum(n);
    if(n==rev){
        cout<<"number is a palindrome \n";
    }
    else{
   cout<<"number is not a palindrome \n";
    }
}

void gcdOf2Num(int n1,int n2){
    int i=2,gcd=1;
    while(i<= min(n1,n2)){
        if(n1%i==0 && n2%i==0){
            gcd= i;
        }
        i++;
    }
    cout<<"gcd : "<<gcd<<'\n';
}


void gcdOf2NumBetter(int n1 , int n2){
      int i=min(n1,n2),gcd=1;
    while(i>=1 ){
        if(n1%i==0 && n2%i==0){
            gcd= i;
            break;
        }
        i--;
    }
    cout<<"gcd : "<<gcd<<'\n';
}

void gcdOf2NumOptimal(int n1, int n2){
    while(n1>0 && n2>0){
        if(n1>n2){
            n1=n1%n2;
        }
        else{
            n2=n2%n1;
        }
    }
    if(n1==0){
        cout<<"gcd : "<<n2<<'\n';
    }
    else{
        cout<<"gcd : "<<n1<<'\n';
    }
}


int main(){
    countDigit(12345);
    countDigitOptimal(12345);
    cout<<"reverse of num : "<<reverseNum(17800)<<'\n';
    checkPalindrome(14545);
    gcdOf2Num(20 , 15);
    gcdOf2NumBetter(20,15);
    gcdOf2NumOptimal(20,15);
}