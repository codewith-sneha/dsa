#include<iostream>
using namespace std;

void aToi(string s){
    int i=0;
    int ans = 0;
    int sign=1;
    while(i<s.length() && s[i]==' '){
        i++;
    }
    if(i < s.length() &&(s[i]=='-' || s[i]=='+')){
        if(s[i]=='-'){
            sign =-1;
        }
        else{
            sign =1;
        }
        i++;
    }
    while(i<s.length() ){
        if( s[i]>='0' && s[i]<='9'){
            if(ans>((INT_MAX-(s[i]-'0'))/10)){
                std::cout<<INT_MAX<<endl;
                return;
            }
            else{
                ans = ans*10 + (s[i]-'0');
            }
        }
        else{
            break;
        }
    i++;
       
    }
    ans *= sign;
    std::cout<<ans<<endl;
}

int main(){
    aToi("42");
    aToi("   -42");
    aToi("4193 with words");
    aToi("words and 987");
    aToi("-91283472332");
    return 0;
}