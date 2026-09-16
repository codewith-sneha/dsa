#include<iostream>
#include<vector>
using namespace std;

vector<int> arr={1,2,3,4,5,6};
int n=arr.size();


void print(){
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<'\n';
}

// TC : O(N*N) , SC : O(1)
void bruteLeft(int k ){
    for(int i =0;i<k;i++){
        int temp = arr[0];
        for(int j=1;j<n;j++){
            arr[j-1]=arr[j];
        }
        arr[n-1]=temp;
    }
}

// TC : O(N*N) ,  SC : O(1)
void bruteRight(int k ){
    for(int i =0;i<k;i++){
        int temp = arr[n-1];
        for(int j=n-1;j>0;j--){
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }
}

// TC : O(N) , SC : O(N)
void betterLeft(int k){
    k=k%n;
    vector<int> temp;
    int i=0;
    while(i<k){
        temp.push_back(arr[i]);
        i++;
    }
    int left=0;
    //shift rest elemnts
    for(int i=k;i<n;i++){
        arr[left]=arr[i];
        left++;
    }
    // shift temp to arr 
    int end=k-1;
    for(int i=n-1;i>=n-k;i-- ){
        arr[i]=temp[end];
        end--;
    }

}


void reverse(int left , int right){
    int temp;
    while(left<=right){
        temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        right--;
        left++;
    }
}

// TC : O(N)  , SC : O(1)
void optimalLeft(int k){
    reverse(0,k-1);
    reverse(k,n-1);
    reverse(0,n-1);
}

void optimalRight(int k){
    reverse(0,n-1);
    reverse(0,k-1);
    reverse(k,n-1);
    
}


int main(){
    // bruteLeft(2);
    // bruteRight(2);
    // betterLeft(2);
    // optimalLeft(3);
    optimalRight(3);
    print();
}