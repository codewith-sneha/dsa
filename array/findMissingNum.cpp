// Input: arr[] = [8, 2, 4, 5, 3, 7, 1]
// Output: 6
// Explanation: All the numbers from 1 to 8 are present except 6.
#include<iostream>
#include<map>
using namespace std;

vector<int> arr={8, 2, 4, 5, 3, 7, 1};
int n=8;
int num=n-1;

// TC - O(N) , SC - O(N)
void betterApproach(){
    map<int , int> mp;
    for(int i : arr){
        mp[i]+=1;
    }
    for(int i =1;i<=n;i++){
        if(mp[i]==0){
            cout<<"missing num : "<<i<<'\n';
            break;
        }
    }
}

//TC : O(n*n)
void bruteApproach(){
    for(int i=1;i<=n;i++){
        int flag=0;
        for(int j=0;j<n-1;j++){
            if(arr[j]==i){
                flag=1;
            }
        }
        if (flag==0)
        {
            cout<<"missing num : "<<i<<'\n';
            break;
        }
        
    }
}

// Expected: 1 ^ 2 ^ 3 ^ 4 ^ 5
// Array: 1 ^ 2 ^ 4 ^ 5
// When you XOR both: (1 ^ 2 ^ 4 ^ 5) ^ (1 ^ 2 ^ 3 ^ 4 ^ 5).  bcoz a^a=0 and a^0=a
// TC :O(N)
void optimalApproachUsingXor(){
    int xor1 =0 , xor2=0;
    for(int i =0;i<num;i++){
        xor1^=arr[i];
    }

    for(int i=1;i<=n;i++){
        xor2^=i;
    }

    int missing = xor1^xor2;
    cout<<"missing num : "<<missing<<'\n';
}

// TC :O(N)
void optimalApproach(){
    int sum =0;
    for(int i =0;i<num;i++){
        sum+=arr[i];
    }

    int ActualSum = (n*(n+1))/2;
    int missing = ActualSum-sum;
    cout<<"missing num : "<<missing<<'\n';
}

int main(){
    bruteApproach();
    betterApproach();
    optimalApproach();
    optimalApproachUsingXor();
}