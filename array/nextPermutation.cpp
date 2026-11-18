#include<iostream>
using namespace std;

// input:{1, 2, 4, 6, 5, 3}
// output : {1, 2, 5, 3, 4, 6}

vector<int> arr ={1, 2, 4, 6, 5, 3};
int n =arr.size();

void print(){
     for(int i : arr){
        cout<<i<<" ";
    }
    cout<<'\n';
}


void optimalApproach(){
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

void bruteForceApproach(){
    // storing all permutations of the given array
    // then sort all permutation in ascending order 
    // then find place of given permutation in all permutations array
    // then return the next permutation 

    // TC - O(N! * N!LOGN!)
    // SC - O(N! * N)
}

int main(){
    print();
    optimalApproach();
    print();
    bruteForceApproach();
}