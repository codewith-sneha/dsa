#include<iostream>
#include<map>
using namespace std;

string s = "abbccc";
int n=s.length();

void sortByFrequency(){
    string ans;
    map<char , int> mp;
    for(int i =0;i<n ;i++){
        mp[s[i]]++;
    }
    vector<pair<char,int>> v(mp.begin(),mp.end());
    sort(v.begin(),v.end() , [](pair<char,int> &a , pair<char,int> &b){
        return a.second>b.second;
    });
    for(auto p:v){
        for(int i =0;i<p.second;i++){
            ans+=p.first;
        }
    }
    cout<<"ans is : "<<ans<<"\n";
}

int main(){
    sortByFrequency();
    return 0;
}