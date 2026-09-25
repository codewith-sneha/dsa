#include<iostream>
#include<map>
using namespace std;

vector <int> arr = {1,0,2,0,3,5};
vector <int> arr2 ={1, 1, 2, 2, 2, 3, 4, 4};
int n=arr.size();
int n2 = arr2.size();

void print(vector <int> arr){
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<'\n';
}

void removeDuplicate(){
    int j=0;
    for(int i =1;i<n2;i++){
        if(arr2[i]!=arr2[j]){
            j++;
            arr2[j]=arr2[i];
        }
    }
}


void optimalMoveZeroToEnd(){
    int j=-1,i=0;
    for(i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1){
        return;
    }
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
}

int main(){
    optimalMoveZeroToEnd();
    print(arr);
    removeDuplicate();
    print(arr2);
}