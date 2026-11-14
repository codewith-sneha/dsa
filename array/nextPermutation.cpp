#include<iostream>
using namespace std;

// input:{1, 2, 4, 6, 5, 3}
// output : {1, 2, 5, 3, 4, 6}

vector<int> arr ={1, 2, 4, 6, 5, 3};
int n =arr.size();

void print(vector<int> arr){
     for(int i : arr){
        cout<<i<<" ";
    }
    cout<<'\n';
}


void optimalApproach(){
    int flag =1,i,j;
for(i=n-1;i>0;i--){
    if(arr[i]>arr[i-1]){
        flag=0;
        break;
    }
}
if(flag==1){
    i=0;
}
else{

int mn=INT_MAX,mnIndex =0,k;
for(k =i;k<n;k++){
    if(arr[i-1]<arr[k]){
        if(mn>arr[k]){
            mnIndex=k;
            mn=arr[k];
        }
        
    }
}
swap(arr[i-1],arr[mnIndex]);

}
j=n-1;

while(i<j){
swap(arr[i],arr[j]);
i++;
j--;
}
print(arr);

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
    optimalApproach();
    bruteForceApproach();
}