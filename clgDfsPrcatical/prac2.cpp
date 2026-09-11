#include<iostream>
using namespace std;

int arr[5]={6,13,13,9,61};
int n=5;
int a1[8]={5,15,6,8,4,3,0,0};
int n1=6;

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
}

void insertElement(int pos, int element){
    if(pos>n1+1 || pos<1){
        cout<<"Invalid position"<<'\n';
        return;
    }
    if(n1==8){
        cout<<"Array is full"<<'\n';
        return;
    }
    for(int i=n1-1;i>=pos-1;i--){
        a1[i+1]=a1[i];
    }
    a1[pos-1]=element; // pos-1 because array index starts from 0
    n1++;
    }

void sortArrayAsc(){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}


void sortArrayDesc(){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void findDuplicate(){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<"Duplicate element found : "<<arr[i]<<'\n';
                return;
            }
        }
    }
    cout<<"No duplicate element found"<<'\n'; 
}

void commonElemntBetwenTwoArray(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n1;j++){
            if(arr[i]==a1[j]){
                cout<<"Common element found : "<<arr[i]<<'\n';
                return;
            }
        }
    }
    cout<<"No common element found"<<'\n';
}

void deleteElementAtPos(int pos){
    if(pos>n1 || pos<1){
        cout<<"Invalid position"<<'\n';
        return;
    }
    for(int i=pos-1;i<n1-1;i++){
        a1[i]=a1[i+1];
    }
    a1[n1-1]=0; 
    n1--;
}


int main(){
    cout<<"Array ";
    printArray(arr, n);
    sortArrayAsc();
    cout<<"Array after sorting in ascending order: ";
    printArray(arr, n);
    cout<<"Array after sorting in descending order: ";
    sortArrayDesc();
    printArray(arr, n);
    cout<<"Array before inserting element: ";
    printArray(a1, 8);
    insertElement(3, 10);
    cout<<"Array after inserting element: ";
    printArray(a1, 8);
    deleteElementAtPos(3);
    cout<<"Array after deleting element: ";
    printArray(a1, 8);
    findDuplicate();
    commonElemntBetwenTwoArray();
}