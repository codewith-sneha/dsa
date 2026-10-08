// https://leetcode.com/problems/isomorphic-strings/submissions/2164176984/
#include<iostream>
#include<map>
using namespace std;


// Input : s = "egg" , t = "add"
// Output : true

// Input : s = "apple" , t = "bbnbm"
// Output : false

// TC : O(n) , SC : O(n)
bool isIsomorphic(string s, string t){
    if(s.length()!=t.length()){
        return false;
    }
    map<char,char> mp1;
    map<char,char> mp2;
    for(int i=0;i<s.length();i++){
        if(mp1.find(s[i])==mp1.end()){
            mp1[s[i]]=t[i];
        }
        else{
            if(mp1[s[i]]!=t[i]){
                return false;
            }
        }
         if(mp2.find(t[i]) == mp2.end()){
            mp2[t[i]] = s[i];
        }
        else if(mp2[t[i]] != s[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string s = "egg";
    string t = "add";
    cout<<"is isomorohic : "<<isIsomorphic(s,t)<<'\n';
}