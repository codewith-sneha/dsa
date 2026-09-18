#include<iostream>
using namespace std;

vector<int> a = {2,4,5,8,9,11,12};
int n =a.size();

int main(){
int low = 0 , high = n-1;
int search = 8,flag=0;
while(low<high){
    int mid=(low+high)/2;
    if(a[mid]==search){
        flag=1;
        cout<<"element found at index "<<mid;
        break;
    }
    else if(search<a[mid]){
        high=mid;
    }
    else{
        low=mid+1;
    }
}
if(flag==0){
    cout<<"element not found";
}

}