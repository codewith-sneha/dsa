// https://leetcode.com/problems/longest-common-prefix/
#include<iostream>
using namespace std;

// Input : str = ["flowers" , "flow" , "fly", "flight" ]
// Output : "fl"
// TC :O(n*m) where n is the number of strings and m is the length of the smallest string

string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        for(int i=0;i<strs[0].size();i++){
            char c=strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=c){
                    return ans;
                }
            }
            ans+=c;
        }
        return ans;
    }

int main(){
    // vector<string> strs = {"flower","flow","flight"};
    vector<string> strs = {"dog" , "cat" , "animal", "monkey" };
    cout << longestCommonPrefix(strs) << endl;
}