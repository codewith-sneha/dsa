#include<iostream>
using namespace std;

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
            cout<<i<<" ";
        }
    }
}

void fact(){
    int fact = 1 , n;
    cout<<"Enter the number to find factorial : ";
    cin>>n;     
    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    cout<<"Factorial of "<<n<<" is : "<<fact;
}

int main (){
    primeNo();
    cout<<endl;
    fact();
}



