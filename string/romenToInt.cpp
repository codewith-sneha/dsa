#include<iostream>
#include<map>
using namespace std;

// TC - O(n) , SC - O(1)
void romenToInt(string s){
    int ans = 0;
    map <char,int> mp ={   {'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D', 500},{'M', 1000}};
    for(int i=0;i<s.length();i++){
        if(i+1<s.length()) {
            if(mp[s[i]]<mp[s[i+1]]){
            ans -= mp[s[i]];
            }
            else{
                ans += mp[s[i]];
            }
    }
    else{
            ans += mp[s[i]];
        }
    
}
cout<<ans<<endl;}

int main(){
    romenToInt("III");
    romenToInt("IV");
    romenToInt("IX");
    romenToInt("LVIII");
    romenToInt("MCMXC");
    romenToInt("MMCDXLIV");
    return 0;
}