#include<iostream>
using namespace std;

int arr[5]={6,3,23,9,1};
int n=5;

void print(){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
}

void swap(int n1,int n2){
       int temp =n1;
        n1=n2;
        n2=temp;
}

//TC - worst , best and avg case O(n*n) 
void selection(){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
               int temp =arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
           
        }
    }
    print();
}

//TC - worst and avg case O(n*n) , best case O(n)
void bubble(){
for(int i=n;i>0;i--){
    for(int j=0;j<i-1;j++){
        if(arr[j]>arr[j+1]){
           int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
}


//TC - worst and avg - O(n*n) , best case - O(n)
void insertion(){
    for(int i =1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }

        }
    }
}

void merge(int low, int mid , int high ){
    int i=low,j=mid+1;
    int temp[n];
    int k=0;
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
            i++;
            k++;
        }
        else if(arr[i]==arr[j]){
            temp[k]=arr[i];
            i++;j++;
            k++;
        }
        else{
            temp[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=high){
        temp[k]=arr[j];
        j++;
        k++;
    }
    for(int m=low;m<=high;m++){
        arr[m]=temp[m-low];
    }
}

// TC - worst , best and avg case O(nlogn)
void mergeSort(int low,int high){
    if(low>=high){
        return;
    }
    int mid =(low+high)/2;
    mergeSort(low,mid);
    mergeSort(mid+1,high);
    merge(low,mid,high);

}

int findPivot(int low , int high){
    int pivot = arr[low];
    int i=low,j=high;
    while(i<j){
        while(arr[i]<=pivot && i<high){
            i++;
        }
        while(arr[j]>pivot && j>low){
            j--;
        }
        if(i<j){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }

    }
    int temp =arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;
}


// TC - worst case O(n*n) , best and avg case O(nlogn)
void quickSort(int low,int high){
    if(low<high){
        int pivotIndex = findPivot(low,high);
        quickSort(low,pivotIndex-1);
        quickSort(pivotIndex+1,high);
    }
}

int main(){
    // selection();
    // bubble();
    // insertion();
    // mergeSort(0,n-1);
    quickSort(0,n-1);
    print();
}