#include<iostream>
#include<string>
using namespace std;

// s = "(1+(2*3)+((8)/4))+1"
// Output: 3

void maxDepth(string s){
    int depth =0, maxDepth=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            depth++;
            maxDepth=max(maxDepth,depth);
        }
        else if(s[i]==')'){
            depth--;
        }
    }
    cout<<"Max Depth of the string : "<<maxDepth<<'\n';
}

int main(){
string s= "(1+(2*3)+((8)/4))+1";
maxDepth(s);
}