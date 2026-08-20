#include <iostream>
using namespace std;


// *
// **
// ***
// ****
// *****
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

// *****
// *****
// *****
// *****
// *****
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

// 1
// 12
// 123
// 1234
// 12345
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

// 1
// 22
// 333
// 4444
// 55555
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

// *****
// ****
// ***
// **
// *
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

// 12345
// 1234
// 123
// 12
// 1
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

//      *
//     ***
//    *****
//   *******
//  *********
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


//  *********
//   *******
//    *****
//     ***
//      *
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


//      *
//     ***
//    *****
//   *******
//  *********
//  *********
//   *******
//    *****
//     ***
//      *
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


// *
// **
// ***
// ****
// *****
// *****
// ****
// ***
// **
// *
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


// 1
// 01
// 101
// 0101
// 10101
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


// 1      1
// 12    21
// 123  321
// 12344321
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


// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 
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


// A
// AB
// ABC
// ABCD
// ABCDE
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


// ABCDE
// ABCD
// ABC
// AB
// A
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


// A
// BB
// CCC
// DDDD
// EEEEE
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


//     A
//    ABA
//   ABCBA
//  ABCDCBA
void p17(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << " ";
        }
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch++;
        }
        ch -= 2;
        for (int j = 1; j < i; j++)
        {
            cout << ch;
            ch--;
        }
        cout << '\n';
    }
}


// E
// DE
// CDE
// BCDE
// ABCDE
void p18()
{
    for (char i = 'E'; i >= 'A'; i--)
    {
        for (char j = i; j <= 'E'; j++)
        {
            cout << j;
        }
        cout << '\n';
    }
}



// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
void p19()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 5; j > i; j--)
        {
            cout << "*";
        }
        for (int j = 1; j <= i * 2; j++)
        {
            cout << " ";
        }
        for (int j = 5; j > i; j--)
        {
            cout << "*";
        }
        cout << '\n';
    }
    for (int i = 4; i >= 0; i--)
    {
        for (int j = 5; j > i; j--)
        {
            cout << "*";
        }
        for (int j = 1; j <= i * 2; j++)
        {
            cout << " ";
        }
        for (int j = 5; j > i; j--)
        {
            cout << "*";
        }
        cout << '\n';
    }
}



// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *
void p20()
{
    for (int i = 4; i >= 0; i--)
    {
        for (int j = 4; j >= i; j--)
        {
            cout << "*";
        }
        for (int j = 1; j <= i * 2; j++)
        {
            cout << " ";
        }
        for (int j = 4; j >= i; j--)
        {
            cout << "*";
        }
        cout << '\n';
    }
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            cout << "*";
        }
        for (int j = 1; j <= i * 2; j++)
        {
            cout << " ";
        }
        for (int j = 4; j >= i; j--)
        {
            cout << "*";
        }
        cout << '\n';
    }
}


// ****
// *  *
// *  *
// ****
void p21(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << '\n';
    }
}



// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444
void p22(int n)
{
    for (int i = 0; i < n * 2 - 1; i++)
    {
        for (int j = 0; j < n * 2 - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (n * 2 - 2) - j;
            int bottom = (n * 2 - 2) - i;
            cout << n - min(min(top, bottom), min(left, right)) << " ";
        }
        cout << '\n';
    }
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
    p21(4);
    p22(4);
}