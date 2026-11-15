#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void print(vector <int> &v){
    for(int i : v){
        cout<<i<<" , ";
    }
    cout<<'\n';
}

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

// ---- Optimisation Logic -----
// 4 → 1, 2, 4
// 9 → 1, 3, 9
// 25 → 1, 5, 25
// 49 → 1, 7, 49
// all these 3 divisors have common thing - 1 as and themselves as a factor and middle factor is prime 
// - means a num has 3 divisors if their sqrt is a prime number


vector<int> threeDivisorsOptimal(vector<int>& query) {
        vector<int> ans;
       for(int i=0;i<query.size();i++){
        cout<<query[i]<<"\n";
           int divCount=0;
           for(int k = 2;k*k<=query[i];k++){
            if(isPrime(k)){
                divCount++;
            }
           }
           ans.push_back(divCount);
       }
        return ans;
    }


vector<int> threeDivisors(vector<int>& query) {
        vector<int> ans;
       for(int i=0;i<query.size();i++){
        cout<<query[i]<<"\n";
           int divCount=0;
           for(int k = 4;k<=query[i];k++){
           int count =0;
           for(int j=2;j<=sqrt(k);j++){
               if(k%j==0){
                   count++;
                   if(k/j != j){
                    count++;
                   }
               }
           }
           if(count==3){
            cout<<k<<" divisor 3 \n";
               divCount+=1;
           }
           }
           ans.push_back(divCount);
       }
        return ans;
    }

int main(){
    vector<int> v ={3,10};
    vector<int> ans ;
    // ans = threeDivisors(v);
    ans=threeDivisorsOptimal(v);
    print(ans);

}

