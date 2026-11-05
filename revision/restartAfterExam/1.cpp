#include<iostream>
#include<map>
using namespace std;

vector<int> a={1,0,1,0,0,3,5,0,1};
int n=a.size();

// vector<int> a2={1,1,2,2,3,3,4,4,5};
vector<int> a2={1,1,2,2,3};
int n2=a2.size();

void print(vector<int> a,int n){
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<'\n';
}

void anagram(string s ,string t){
if(s.length()!=t.length()){
    cout<<"Not anagrams\n";
    return;
}
int freq[26]={0}; 
for(int i=0;i<s.length();i++){
    freq[s[i]-'a']++;
    freq[t[i]-'a']--;
}
for(int i=0;i<26;i++){
    if(freq[i]  !=0){
        cout<<"Not anagrams\n";
        return;
    }
}
cout<<"Anagrams\n";
}

void RemoveDuplicatesfromSortedArray(){
    int i=0;
    for(int j=1;j<n2;j++){
        if(a2[j]!=a2[i]){
            i++;
            a2[i]=a2[j];
        }
    }
    for(int j=i+1;j<n2;j++){
        a2[j]=0;
    }
}

void movesZeroesToEnd(){
    int i=0;
    for(int j=0;j<n;j++){
        if(a[j]!=0){
           a[i]=a[j];
           i++;
        }
    }
    for(int j=i;j<n;j++){
        a[j]=0;
    }
}

int main(){
    movesZeroesToEnd();
   print(a, n);
   print(a2, n2);
   RemoveDuplicatesfromSortedArray();
   print(a2, n2);
   anagram("listen","silent");
    return 0;
}

