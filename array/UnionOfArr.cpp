#include<iostream>
#include <map>
using namespace std;

vector<int >a1 ={1,3,4,5,8};
vector<int >a2 ={2,6,7,8,9,11};
int n1=a1.size();
int n2 = a2.size();

void print(vector<int> &arr ){
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<'\n';
}

void usingMap(){
    map<int ,int> mp;
    for(int i=0;i<n1;i++){
        mp[a1[i]]+=1;
    }
     for(int i=0;i<n2;i++){
        mp[a2[i]]+=1;
    }
    vector<int> uni;
    for(auto it:mp){
        uni.push_back(it.first);
    }
    print(uni);

}

int main(){
    usingMap();
}