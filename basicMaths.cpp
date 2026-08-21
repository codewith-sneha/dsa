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


// TC : O(log n) => [log n(base 10) +1] bcoz no. of iteration depend on no. of terms
void checkArmstrong(int n){
    int len = to_string(n).length();
    int armNum =n,res=0;
    while(armNum!=0){
        int digit = armNum%10;
        res+=pow(digit,len);
        armNum/=10;
    } 
    if(res==n){
        cout<<"number is armstrong \n";
    }
    else{
        cout<<"number is not a armstrong \n";
    }
}


// TC : O(n)
void printAllDivisors(int n){
    for(int i =1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    cout<<"\n";
}

void printAllDivisorsOptimal(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" ";
            if(n/i!=i){
                cout<<n/i<<" ";
            }
        }
    }
    cout<<'\n';
}

void checkPrime(int n){
    bool flag=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"num is prime no. \n";
    }
    else{
        cout<<"num is not a prime no. \n";
    }
}

void checkPrimeOptimal(int n){
    bool flag=true;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"num is prime no. \n";
    }
    else{
        cout<<"num is not a prime no. \n";
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
    checkArmstrong(157);
    printAllDivisors(36);
    printAllDivisorsOptimal(38);
    checkPrime(8);
    checkPrimeOptimal(13);
}