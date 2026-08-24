#include<iostream>
using namespace std;


void printTest(int n ){
    if(n<=0){
        return;
    }
    cout<<n<<" ";
    printTest(n-1);

}

void printName(int n){
    if(n<=0)
    return;
    cout<<"sneha ";
    printName(n-1);
}

void print1Ton(int cur,int n){
    if(cur>n){
        return;
    }
    cout<<cur<<" ";
    print1Ton(cur+1,n);
}

void sumNnum(int n,int sum , int start){
    if(start>n){
        cout<<sum;
        return;
    }
    sum+=start;
    sumNnum(n,sum,start+1);

}

void factorial(int n ,int fact=1 ){
    if(n<=1){
        cout<<"factorial : "<<fact;
        return;
    }
    fact*=n;
    factorial(n-1,fact);
}

void reverseArr(int arr[], int start , int end , int s){
    if(start>=end){
        cout<<'\n';
        for(int i =0;i<s;i++){
            cout<<arr[i]<<" ";
        }
        cout<<'\n';
        return;
    }
    int temp=arr[end];
    arr[end]=arr[start];
    arr[start]=temp;
    reverseArr(arr , start+1,end-1,s);
}

void palindromeStr(string s , int l){
    int end=l;
    for(int i=0;i<l/2;i++){
        if(s[i]!=s[end]){
            cout<<"not palindrome \n";
            return;
        }
         end--;
    }
    cout<<" palindrome \n";
}

void palindromeStrOptimal(string str , int i){
    if(i>=str.length()/2){
        cout<<" palindrome \n";
        return;
    }

    if(str[i] != str[str.length()-i-1]){
    cout<<"not palindrome \n";
    return ;
    }
palindromeStrOptimal(str,i+1);

}

int fibonacciOptimal(int n ){
    if(n<=1){
        return n;
    }
    int last = fibonacciOptimal(n-1);
    int slast =fibonacciOptimal(n-2);
    return last +slast;
}

void fibonacci(int n){
    cout<<"0 1 ";
    int n1=0,n2=1;
    for(int i=2;i<=n;i++){
        int n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
    }
    cout<<"\n";
}

int main(){
    printTest(5);
    cout<<'\n';
    printName(5);
    cout<<'\n';
    print1Ton(1,5);
    cout<<'\n';
    sumNnum(6,0 ,1);
    cout<<'\n';
    factorial(6);
    int arr[5]={2,5,3,18,23};
    reverseArr(arr , 0 , 4 ,5);
    string str = "madama";
    palindromeStr(str , str.length()-1 );
    palindromeStrOptimal(str,0);
    cout<<fibonacciOptimal(6)<<"\n";
    fibonacci(6);
}