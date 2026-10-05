#include<iostream>
#include<map>
using namespace std;

vector<int> arr ={1,0,3,0,0,4,0,5};
int n =arr.size();

void print(vector<int> &arr){
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<'\n';
}

void moveZeroToEnd(){
    //two pointer approach
    int j=0;
    for(int i =0;i<n;i++){
        if(arr[i]!=0){
            int temp = arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            j++;
        }
    }
}

void findMissingNum(vector<int>& arr){
    // approach 1 : using map 
    map<int,int> mp;
    for(int i=1;i<arr.size()+1;i++){
        mp[i]=0;
    }
    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
    }

    for(auto it: mp){
        if(it.second==0){
            cout<<"missing num : "<<it.first<<'\n';
            break;
        }
    }

    // approach 2 : using sum 
    int sum1=0;
    for(int i=1;i<=arr.size()+1;i++){
        sum1+=i;
    }
    int sum2=0;
    for(int i=0;i<arr.size();i++){
        sum2+=arr[i];
    }
    cout<<"missing num : "<<sum1-sum2<<'\n';

// approach 3 : using xor
    int xr1=0;
    for(int i=1;i<=arr.size()+1;i++){
        xr1=xr1 ^ i;
    }
    int xr2=0;
    for(int i=0;i<arr.size();i++){
        xr2=xr2^arr[i];
    }
    int xr=xr1^xr2;
    cout<<"missing num : "<<xr<<'\n';
}

void NumberAppearingOnce(vector<int> &arr){
    //approach 1 : using nested loops time o(n*n) , space (o(1))
    //approach 2 : using map time o(n), space o(n)
    //approach 3 : using xor time o(n), space o(1)
    int xr=0;
    for(int i =0;i<arr.size();i++){
        xr^=arr[i];
    }
    cout<<"Number Appearing Once : "<<xr<<'\n';
}

void MaximumConsecutiveOnes(vector<int> &arr){
    // approach 1 : using nested loops time o(n*n) , space (o(1))
    // approach 2 : using map time o(n), space o(n)
    // approach 3 : using two pointer time o(n), space o(1)
    int count=0 , mxCount=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            count++;
        }
        else{
            count=0;
        }
        mxCount=max(mxCount,count);
    }
    cout<<"Maximum Consecutive Ones : "<<mxCount<<'\n';
}

void leftRotateByk(vector<int> &arr,int k){
    // approach 1 : using extra space time o(n) , space (o(n))
    // approach 2 : using reversal algorithm time o(n), space o(1)
    int n=arr.size();
    k=k%n;

    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+n-k);
    reverse(arr.begin()+n-k,arr.end());

}

void RemoveDuplicatesfromSortedArray(vector<int> &arr){
    // approach 1: nested loops time o(n*n) , space (o(1))
    // approach 2: using map time o(n), space o(n)
    // approach 3: two pointer time o(n), space o(1)
   int j=0;
   for(int i=1;i<arr.size();i++){
    if(arr[i]!=arr[j]){
        j++;
        arr[j]=arr[i];
    }
   }
   arr.resize(j+1);
}

int main(){
    print(arr);
    moveZeroToEnd();
    print(arr);
    
    vector<int> arr2  = {1,2,3,5};
    print(arr2);
    findMissingNum(arr2);
    print(arr2);

    vector<int> arr3  = {1,2,3,5 , 2,1,5};
    print(arr3);
    NumberAppearingOnce(arr3);

    vector<int> arr4 = {1, 0, 1, 1, 1, 0, 1};
    print(arr4);
    MaximumConsecutiveOnes(arr4);

    leftRotateByk(arr4,3);
    print(arr4);

    vector<int> arr5 = {1, 1, 2, 2, 2, 3, 4, 4};
    print(arr5);
    RemoveDuplicatesfromSortedArray(arr5);
    print(arr5);
}