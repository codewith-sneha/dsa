#include<iostream>
#include<map>
using namespace std;

vector <int> arr = {1,0,2,0,3,5};
int n=arr.size();

void print(){
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<'\n';
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
    print();
}