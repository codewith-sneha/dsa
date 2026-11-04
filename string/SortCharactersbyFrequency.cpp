#include<iostream>
#include<map>
using namespace std;

// Input: s = "tree"
// Output: "eert" or "eetr"

string s = "tree";

void SortCharactersbyFrequency(){
 map<char,int> mp;
 for(int i=0;i<s.length();i++){
    mp[s[i]]++;
 }
vector<pair<char,int>> v(mp.begin(),mp.end());
for(int i=0;i<v.size();i++){
for(int j=i;j>0;j--){
    if(v[j].second>v[j-1].second){
        swap(v[j],v[j-1]);
    }
}}
for(int i=0;i<v.size();i++){
    for(int j=0;j<v[i].second;j++){
        cout<<v[i].first;
    }
}
}

int main(){
    SortCharactersbyFrequency();
    return 0;
}