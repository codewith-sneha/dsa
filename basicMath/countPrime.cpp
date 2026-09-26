#include<iostream>
using namespace std;


int brute(int n){
    if(n<=2){
            return 0;
        }
        int cnt=1;
        for(int i = 3;i<n;i++){
            int flag=0;
            for(int j = 2; j * j <= i; j++){
                if(i%j==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                cnt+=1;
            }
        }
        cout<<"count : "<<cnt;
}

int countPrimes(int n) {
        if(n<=2) return 0;
        int cnt = n-2;
        vector<char> s(n, 1);
        for(int i = 2 ; i*i < n ; i++ ){
            if(s[i]) {
                for(int j = i*i; j<n; j+=i){
                    if(s[j]){
                        s[j] = 0;
                        cnt--;
                    }
                }
            }
        }
        return cnt;
    }

int main(){
    cout<<brute(10)<<'\n';
    cout<<countPrimes(10);

}