#include<iostream>
using namespace std;

int main(){
    int n1=3,n2=5;
    int lcm;
    int start = max(n1,n2);
    while(start<=n1*n2){
        if(start%n1==0 && start%n2==0){
            cout<<"lcm : "<<start<<'\n';
        break;        }
        start++;
    }
}