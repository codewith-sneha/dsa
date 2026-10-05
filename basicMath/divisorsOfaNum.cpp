#include<iostream>
using namespace std;

// Input: n = 6
// Output = [1, 2, 3, 6]

// TC : O(sqrt(n))
// SC : O(sqrt(n))
int main(){
    int n =12;
    vector<int> divisors;
    divisors.push_back(1);
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            divisors.push_back(i);
            if(i!=n/i){
                divisors.push_back(n/i);
            }
        }
    }
    divisors.push_back(n);
    sort(divisors.begin(),divisors.end());
    for(int i=0;i<divisors.size();i++){
        cout<<divisors[i]<<" ";
    }
    cout<<'\n';
}