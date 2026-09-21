#include<iostream>
using namespace std;

// Input: nums1 = [1, 2, 2, 3, 5], nums2 = [1, 2, 7]
// Output: [1, 2]

vector <int> arr1 = {1, 2, 2, 3, 5};
vector <int> arr2 = {1, 2 , 2, 7};
int n1=arr1.size();
int n2=arr2.size();

void print(vector<int> &arr){
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<'\n';
}

void optimal(){
    int i =0,j=0;
    vector<int> temp;
    while(i<n1 && j<n2){
        if(arr1[i]==arr2[j]){
            temp.push_back(arr1[i]);
            i++;j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    print(temp);
}

void brute(){
    vector<int> temp;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j] && find(temp.begin(),temp.end(),arr1[i])==temp.end()){
                temp.push_back(arr1[i]);
            }
        }
    }
    print(temp);
}

int main(){
    brute();
    optimal();
}