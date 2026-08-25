#include<iostream>
#include<map>
using namespace std;

void hashing(){
    int n;
    cout<<"enter your array size ";
    cin>>n;
    int arr[n];
    cout<<"\nenter elements : \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    int q;
    cout<<"enter element count u want :\n";
    cin>>q;
    cout<<hash[q];
}

void charHashing(){
    int hash[26]={0};
    string s; 
    char ch;
    cout<<"enter character ";
    cin>>s;
    for(int i=0;i<s.length();i++){
        hash[s[i]-'a']+=1;
    }
    cout<<"enter character - to know count ";
    cin>>ch;
    cout<<"\ncount : "<<hash[ch-'a'];
}

void hashingUsingmap(){
    int n;
    cout<<"enter array size";
    cin>>n;
    int arr[n];
    map<int ,int> mp; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    int num;
    cout<<"enter no u want to search";
    cin>>num;
    cout<<mp[arr[num]];
}

void countFrequency(){
    unordered_map<int , int> mp;
    int arr[10] ={2,2,3,4,5,5,4,3,6,4};
    for(int i=0;i<10;i++){
        mp[arr[i]]++;
    }
    for(auto it : mp){
        cout<<"frequncy of "<<it.first<<" : "<<it.second<<" ";
    }
}

void minAndMaxElement(){
    unordered_map<int , int> mp;
    int arr[10] ={2,2,4,4,5,5,4,3,6,4};
    for(int i=0;i<10;i++){
        mp[arr[i]]++;
    }
    int maxEl,minEl,maxCount=0,minCount=INT_MAX;
    for(auto it : mp){
        if(it.second >maxCount){
            maxCount = it.second;
            maxEl=it.first;
        }
        if(it.second <minCount){
            minCount=it.second;
            minEl=it.first;
        }
    }
    cout<<"max count elemnt : "<<maxEl<<" with frequency : "<<maxCount<<'\n';
    cout<<"min count elemnt : "<<minEl<<" with frequency : "<<minCount<<'\n';

}

int main(){
    
    // hashingUsingmap();  //it is optimal 
    countFrequency();
    minAndMaxElement();
}