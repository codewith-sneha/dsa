#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;
// Input : s = "anagram", t = "nagaram"
// Output : true

// TC- O(N) , SC - O(1)
bool checkAnagramOptimal(string s,string t){
    if(s.length()!=t.length()){
        return false;
    }
    int hash[26]={0};
    for(int i =0;i<s.length();i++){
        hash[s[i]-'a']++;
        hash[t[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(hash[i]!=0){
            return false;
        }
    }
    return true;
}

// TC - O(nlogn) , SC - O(1)
bool checkAnagram2ndApproach(string s,string t){
    if(s.length()!=t.length()){
        return false;
    }
 sort(s.begin(),s.end());
 sort(t.begin(),t.end());
 if(s==t){
    return true;
 }
 else{
    return false;
 }
}

// TC -O(nlogn) , SC - O(n)
bool checkAnagram(string s,string t){
    if(s.length()!=t.length()){
        return false;
    }
   map<char,int> mp1;
   map<char,int> mp2;
   for(int i=0;i<s.length();i++){
        mp1[s[i]]++;
        mp2[t[i]]++;
    }
    for(auto it:mp1){
        if(mp2.find(it.first)==mp2.end() || mp2[it.first]!=it.second){
            return false;
    }
    }
    return true;
}

int main(){
    string s = "anagram";
    string t = "nagaram";
  checkAnagram(s,t)?cout<<"true\n":cout<<"false\n";
  checkAnagram2ndApproach(s,t)?cout<<"true\n":cout<<"false\n";
  checkAnagramOptimal(s,t)?cout<<"true\n":cout<<"false\n";
}