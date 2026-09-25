#include<iostream>
using namespace std;

vector <int> arr ={1, -2, 3, -4, -5, 6};
int n = arr.size();

//input : {1, -2, 3, -4, -5, 6}
//output : [-2, -4, -5, 1, 3, 6]
//TC :O(N)

void print(){
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<'\n';
}

int main(){
    int j =0;
    for(int i =0;i<n;i++){
        if(arr[i]<0){
            int temp = arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            j++;
        }
    }
    print();
}