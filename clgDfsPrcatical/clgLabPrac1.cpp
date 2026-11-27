#include<iostream>
using namespace std;

long long fact(int n){
    long long fact = 1 ;    
    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}

void primeNo(){
    for(int i=2;i<=100;i++){
        bool flag=true;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<i<<" "<<" and factorial : "<<fact(i) <<"\n ";
        }
    }
}

int main (){
    primeNo();
    cout<<endl;
}



