#include<iostream>
#include<map>
using namespace std;

vector <int> arr = {1,2,3};
int n=arr.size();

void print(){
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<'\n';
}

// Time: O(n)
// Auxiliary space: O(1)
void permuation(){
    int flag=0 , start;
    int i;
    for( i =n-1;i>0;i--){
        if(arr[i]>arr[i-1]){
            start = i-1;
            flag = 1;
            break;
        }
    }
    if(flag==0){
        start=0;i=n-1;
     while(start<=i){
        swap(arr[start],arr[i]);
        start++;
        i--;
    }
    return;
    }
    // swap start with num just > than start
    i=n-1;
    while(i>start){
        if(arr[i]>arr[start]){
            swap(arr[i],arr[start]);
            start++;
            break;
        }
        i--;
    }
    i=n-1;
    while(start<=i){
        swap(arr[start],arr[i]);
        start++;
        i--;
    }


}

int main(){
    print();
    permuation();
    print();
    return 0;
}