// DEBUGGING EXERCISE
// 1
#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    i = 400 * 400 / 400;
    cout << i << endl;
    return 0;
}

// 2
#include <iostream>
using namespace std;
void main()
{
    int num[] = {1, 2, 3, 4, 5, 6};
    num[1] = [1] num ? cout << "success" : cout << "Error";
}

// Compiler error

// 3
#include <iostream>
using namespace std;
void main()
{
    int i = 5;
    while (i)
    {
        switch (i)
        {
        default:
        case 4:
        case 5:

            break;
        case 1:
            continue;

        case 2:
        case 3:
            break;
        }
        i - ;
    }
}
// compiler error main function , i--

// 4
#include <iostream>
#include <malloc.h>

char *alloctMemory();
void main()
{
    char *str;
    str = allocateMemory();
    cout << str;
    delete str;
    str = "  ";
    cout << str;
}
char *allocateMemory()
{
    str = "Memory allocation test. ";
    return str;
}

// CALL BY REFRENCES
#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
    cout << "the new number after swapping: " << x << " " << y;
}
int main()
{
    int x, y;
    cout << "Swapping the two numbers: " << endl;
    cin >> x >> y;
    swap(x, y);
    return 0;
}

// SWAPPING BY POINTER
#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
    cout << "after swapping the number : " << *x << " " << *y;
}
int main()
{
    int x, y;
    cout << "Enter the number : ";
    cin >> x >> y;
    swap(&x, &y);
    return 0;
}

// FACTORIAL
#include <iostream>
using namespace std;
int n = 5, f = 1;
int fact(int);
int main()
{
    cout << "Enter the value: ";
    cin >> n;
    f = fact(n);
    cout << f;
    return 0;
}
int fact(int)
{

    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

// Define more than one user define function 
#include<iostream>
using namespace std;
int sum(int,int);
int sub(int,int);

int main()
{
    int a = 20 , b = 8, c;
    c = sum(a,b);
    cout<<"The summation of a and b is : "<<c<<endl;
    c = sub(a,b);
    cout<<"The subtract of a and b is : "<<c<<endl;
    return 0;
}
int sum(int x, int y)
{
    return x+y;
}
int sub(int x, int y)
{
    return x-y;
}