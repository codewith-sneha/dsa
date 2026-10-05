// https://leetcode.com/problems/largest-odd-number-in-string/submissions/2163055292/
#include<iostream>
using namespace std;

// Input : s = "0214638"
// Output : "21463"

int main(){
    string str = "0214638";
    int start;
    int n = str.length();
    int largestOddNum = -1;
    for(int i=n-1;i>=0;i--){
        if((str[i] - '0')%2!=0){  //str[i] - '0' -> to convert string char into int
            largestOddNum = i;
            break;
        }
    }
    //to remove leading zeros from the string
    for(int i=0;i<n;i++){
        if(str[i]!='0'){
            start = i;
            break;
        }
    }
    if(largestOddNum==-1){
        cout<<"No odd number found in the string\n";
    }
    else{
        cout<<"Largest odd number in the string : "<<str.substr(start,largestOddNum+1)<<'\n';
    }
}
