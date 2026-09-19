#include<iostream>
#include <map>
using namespace std;

vector<int >a1 ={1,3,4,5,8};
vector<int >a2 ={2,6,7,8,9,11};
int n1=a1.size();
int n2 = a2.size();

void print(vector<int> &arr ){
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<'\n';
}

void UsingTwoPointer(){
    vector<int> temp;
    int i=0,j=0, k=0;
    while(i<n1&&j<n2){
        if(a1[i]<a2[j]){
            temp.push_back(a1[i]);
            k++;i++;
        }
        else if(a1[i]>a2[j]){
            temp.push_back(a2[j]);
            k++;j++;
        }
        else{
            temp.push_back(a1[i]);
            k++;j++;i++;
        }
    }
    while(i<n1){
        temp.push_back(a1[i]);
            k++;i++;
    }
    while(j<n2){
        temp.push_back(a2[j]);
            k++;j++;
    }
    print(temp);
}

void usingMap(){
    map<int ,int> mp;
    for(int i=0;i<n1;i++){
        mp[a1[i]]+=1;
    }
     for(int i=0;i<n2;i++){
        mp[a2[i]]+=1;
    }
    vector<int> uni;
    for(auto it:mp){
        uni.push_back(it.first);
    }
    print(uni);

}

int main(){
    usingMap();
    UsingTwoPointer();
}