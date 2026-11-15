#include<bits/stdc++.h>
#include<iostream>
using namespace std;


// TC - O(n√n) , SC-O(1)
    long long sumOfDivisors(long long n) {
        // Code here
     long long allSum=0;
       for(int i =1;i<=n;i++){
           long long sum =0;
           for(int j=1;j*j<=i;j++){
               if(i%j==0){
                   sum+=j;
                   if(i/j!=j){
                       sum+=(i/j);
                   }
               }
           }
             allSum+=sum;
       }
       return allSum;
    }


    int main(){
        cout<<sumOfDivisors(3);
    }