#include<iostream>
using namespace std;

void hanoi(int n , char source , char destination , char helper){
    if(n==1){
        cout<<"move from "<<source<<" to "<<destination<<" using "<<helper<< '\n';
        return;
    }
    hanoi(n-1 , source , helper , destination);
   cout<<"move from "<<source<<" to "<<destination<<" using "<<helper<<'\n';
    hanoi(n-1 , helper , destination , source);
}

int main(){
    hanoi(3, 'A' , 'B' , 'C' );
}