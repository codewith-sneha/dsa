// https://leetcode.com/problems/rotate-string/submissions/2164198396/
#include<iostream>
using namespace std;

// Input : s = "abcde" , goal = "cdeab"
// Output : true

// TC : O(n) , SC : O(n)

void rotateStr(string s, string goal){
     s=s+s;
    if(s.find(goal)!=string::npos){
        cout<<"true"<<'\n';
    }
    else{
        cout<<"false"<<'\n';
    }
}

int main(){
    string s="abcde";
    string goal="adeac";
    rotateStr(s, goal);
    rotateStr("abcde", "cdeab");
}
   
