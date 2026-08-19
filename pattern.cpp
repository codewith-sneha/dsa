#include <iostream>
using namespace std;

void p2()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void p1()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void p3()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void p4()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void p5()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void p6()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void p7()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i * 2 - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void p8()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i * 2 - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void p9()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i * 2 - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i * 2 - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void p10()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void p11()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << '\n';
    }
}

void p12(int n)
{
    int k = n - 1; // 3 let. n=4
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        for (int j = k * 2; j >= 1; j--)
        {
            cout << " ";
        }
        k--;
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << '\n';
    }
}

void p13()
{
    int k = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << '\n';
    }
}

void p14()
{

    for (int i = 1; i <= 5; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch++;
        }
        cout << '\n';
    }
}

void p15()
{

    for (int i = 1; i <= 5; i++)
    {
        char ch = 'A';
        for (int j = 5; j >= i; j--)
        {
            cout << ch;
            ch++;
        }
        cout << '\n';
    }
}


void p16()
{
   char ch = 'A';
    for (int i = 1; i <= 5; i++)
    {
     
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
           
        }
        cout << '\n';
         ch++;
    }
}

void p17(int n){
for(int i=1;i<=n;i++){
    for(int j=n;j>=i;j--){
        cout<<" ";
    }
    char ch='A';
    for(int j=1;j<=i;j++){
        cout<<ch;
        ch++;
    }
    ch-=2;
    for(int j=1;j<i;j++){
        cout<<ch;
        ch--;
    }
    cout<<'\n';
}

}

void p18(){
    for(char i='E';i>='A';i--){
        for(char j=i;j<='E';j++){
            cout<<j;
        }
        cout<<'\n';
    }
}

void p19(){
    for(int i=0;i<5;i++){
        for(int j=5;j>i;j--){
            cout<<"*";
        }
        for(int j=1;j<=i*2;j++){
            cout<<" ";
        }
        for(int j=5;j>i;j--){
            cout<<"*";
        }
        cout<<'\n';
    }
    for(int i=4;i>=0;i--){
        for(int j=5;j>i;j--){
            cout<<"*";
        }
        for(int j=1;j<=i*2;j++){
            cout<<" ";
        }
        for(int j=5;j>i;j--){
            cout<<"*";
        }
        cout<<'\n';
    }
}

void p20(){
    for(int i=4;i>=0;i--){
        for(int j=4;j>=i;j--){
            cout<<"*";
        }
        for(int j=1;j<=i*2;j++){
            cout<<" ";
        }
        for(int j=4;j>=i;j--){
            cout<<"*";
        }
        cout<<'\n';
    }
    for(int i=1;i<=4;i++){
        for(int j=4;j>=i;j--){
            cout<<"*";
        }
        for(int j=1;j<=i*2;j++){
            cout<<" ";
        }
        for(int j=4;j>=i;j--){
            cout<<"*";
        }
        cout<<'\n';
    }
}

void p21(){
    
}

int main()
{
    p1();
    p2();
    p3();
    p4();
    p5();
    p6();
    p7();
    p8();
    p9();
    p10();
    p11();
    p12(4);
    p13();
    p14();
    p15();
    p16();
    p17(4);
    p18();
    p19();
    p20();
    p21();
}