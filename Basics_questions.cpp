// program in C++ to print a welcome text in a separate line

#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome"
         << "\n"
         << "To the C++ Programming" << endl;
}

// 2. Write a program in C++ to print the sum of two numbers.
#include <iostream>
using namespace std;
int main()
{
    cout << "Sum of two numbers"
         << "\n"
         << "The sum of 35 and 49 :" << 35 + 49 << "\n";
}

// Write a program in C++ to find Size of fundamental data types.
#include <iostream>
using namespace std;
int main()
{
    cout << "Find size of fundamental Datatypes"
         << "\n"
         << "The size of char:" << sizeof(char) << "bytes\n"
         << "The size of char:" << sizeof(short) << "bytes\n"
         << "The size of char:" << sizeof(int) << "bytes\n"
         << "The size of char:" << sizeof(long) << "bytes\n"
         << "The size of char:" << sizeof(long long) << "bytes\n"
         << "The size of char:" << sizeof(float) << "bytes\n"
         << "The size of char:" << sizeof(double) << "bytes\n"
         << "The size of char:" << sizeof(long double) << "bytes\n"
         << "The size of char:" << sizeof(bool) << "bytes\n";
    return 0;
}

// 4. Write a program in C++ to print the sum of two numbers using variables.
#include <iostream>
using namespace std;
int main()
{
    int x = 39, y = 14;
    cout << "The sum of 39 and 14 : " << x + y << "\n";
    return 0;
}

// 5. Write a program in C++ to check the upper and lower limits of integer

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    cout << "Check the upper and lower limit"
         << "\n"
         << "The maximum limit of int data type:" << INT_MAX << "\n"
         << "The minimum limit of int data type:" << INT_MIN << "\n"
         << "The maximum limit of unsigned int data type:" << UINT_MAX << "\n"
         << "The maximum limit of long long data type:" << LLONG_MAX << "\n"
         << "The minimum limit of long long data type:" << LLONG_MIN << "\n"
         << "The maximum limit of unsigned long long data type:" << ULLONG_MAX << "\n"
         << "The bit contains in a char data tyes:" << CHAR_BIT << "\n"
         << "The maximum limit of char data type:" << CHAR_MAX << "\n"
         << "The minimum limit of char data type:" << CHAR_MIN << "\n"
         << "The maximum limit of signed char data type:" << SCHAR_MAX << "\n"
         << "The minimum limit of signed char data type:" << SCHAR_MIN << "\n"
         << "The maxmum limit of unsigned char data type:" << UCHAR_MAX << "\n"
         << "The minimum limit of short data type:" << SHRT_MAX << "\n"
         << "The minimum limit of short data type:" << SHRT_MIN << "\n"
         << "The minimum limit of unsigned char data type:" << USHRT_MAX << "\n";
    return 0;
}

// 6. Write a program in C++ to check whether the primitive values crossing the limits or not.
// Check whether the primitive values crossing the limits or not :
#include <iostream>
using namespace std;
int main()
{
    int age = 19;
    string name = "Karn Tiwari";
    char gender = 'M';
    bool ismarried = true;
    unsigned short numofsons = 2;
    short yearofapt = 2021;
    unsigned int yearlypackage = 1500000;
    double height = 79.48;
    float gpa = 4.69f;
    long totalDrawan = 12047235L;
    long long balance = 995324987LL;
    float weight = 64.5;
    cout << age << "\n";
    cout << age << "\n";
    cout << age << "\n";
    cout << age << "\n";
    cout << age << "\n";
    cout << age << "\n";
    cout << name << "\n";
    cout << gender << "\n";
    cout << ismarried << "\n";
    cout << weight << "\n";
    return 0;
}

// 7 area of triangle by herons formula
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int s1, s2, s3, area;
    cout << "Enter the all sides\n";
    cin >> s1 >> s2 >> s3;
    int p = (s1 + s2 + s3) / 3;
    area = sqrt(p * (p - s2) * (p - s2) * (p - s3));
    cout << area;
    return 0;
}

// finding third angle
#include <iostream>
using namespace std;
int main()
{
    double a1, a2, a3;
    cout << "Enter the first angle\n";
    cin >> a1;
    cout << "Enter the second angle\n";
    cin >> a2;
    a3 = 180 - (a1 + a2);
    cout << a3;
    return 0;
}

// Write a program in C++ to input a single digit number and print a
//  rectangular form of 4 columns and 6 rows.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number:";
    cin >> n;
    cout << n << n << n << n << endl;
    cout << n << " "
         << " " << n << endl;
    cout << n << " "
         << " " << n << endl;
    cout << n << " "
         << " " << n << endl;
    cout << n << " "
         << " " << n << endl;
    cout << n << n << n << n << endl;
    return 0;
}

// c++
#include <iostream>
using namespace std;

int main()
{
    cout << "\n\n Print the following pattern:\n";
    cout << "--------------------------------\n";
    cout << " xxxxx\n";
    cout << "x     x       x        x\n";
    cout << "x             x        x\n";
    cout << "x          xxxxxxx  xxxxxxx\n";
    cout << "x             x        x\n";
    cout << "x     x       x        x\n";
    cout << " xxxxx\n";
    return 0;
}

// LOOPS QUESTIONS

// 1 Write a program in C++ to display n terms of natural number and their sum.
#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "input a number of terms: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
        sum = sum + i;
    }

    cout << "the sum of natural numbers is : " << sum;
    return 0;
}

// PERFECT NUMBER
// 6 divisior = 1,2,3 and 1+2+3 = 6
#include <iostream>
using namespace std;
int main()
{
    int i, rem, num;
    int sum = 0;
    cout << "Enter the number: ";
    cin >> num;
    for (i = 1; i < num; i++)
    {
        rem = num % i;
        if (rem == 0)
        {
            sum = sum + i;
        }
    }
    if (num = sum)
    {
        cout << num << ": is a perfect number\n";
    }
    else
        cout << num << ": is not a perfect number\n";

    return 0;
}

// PRIME NUMBER
#include <iostream>
using namespace std;
int main()
{
}

// LOOPS PRACTISE...........
// 1
#include <iostream>
using namespace std;
int main()
{
    int i;
    cout << "First 10 natural numbers:\n";
    for (i = 1; i < 10; i++)
    {
        cout << i << " ";
    }
    return 0;
}

// 2
#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "Summation of first n natural numbers:\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << i << " " << endl;
        sum = sum + i;
        cout << sum << endl;
    }

    return 0;
}

// 3

#include <iostream>
using namespace std;
int main()
{
    int i = 1, num = 1, sum = 0;
    cout << "Finding the PERFECT number:";
    while(i<=500)
    {
        while (num <= 500)
        {
            if (i % num == 0)
            {
                sum = sum + num;
            }
            num++;
        }
        if (sum == i)
        {
            cout << i << " ";
        }
        i++;
        sum = 0;
        num = 1;
    }
    return 0;
}



#include <iostream>
using namespace std;
int main() 
{
  cout << "\n\n Find the perfect numbers between 1 and 500:\n";
  cout << "------------------------------------------------\n";
  int i = 1, u = 1, sum = 0;
  cout << "\n The perfect numbers between 1 to 500 are: \n";
  while (i <= 500) 
  {
    while (u <= 500) 
    {
      if (u < i) 
      {
        if (i % u == 0)
          sum = sum + u;
      }
      u++;
    }
    if (sum == i) {
      cout << i << "  " << "\n";
    }
    i++;
    u = 1;
    sum = 0;
  }
}


//ARRAY IN STRUCT 

#include<iostream>
using namespace std;
struct point
{
    int x;
    int y;

};
int main()
{
    point arr[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i].x = i;
        arr[i].y = i*10;

    }
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i].x<<" "<<arr[i].y<<endl;
          
            }
            return 0;
    
}


// STRUCTURE ARGUEMENT === passing by value/...........


#include<iostream>
using namespace std;
struct point
{
    int x;
    int y;

};
void print(point p)
{
    cout<<p.x<<" "<<p.y<<endl;
}
int main()
{
    point p = {10,20};
    print(p);
    return 0;
}

// for performance issue we use referances or pointer it not copying the members and take less time and memory

#include<iostream>
#include<cstring>
using namespace std;

struct Student;
{
    int rollNo;
    string name;
    string address;
    int age;
    string section;
};
void print(Student x) // here we can use referance and pointer ...
{
    cout<<x.rollNo<<" "<<x.name<<" "<<x.address<<" "<<x.section<<" ";

}

int main()
{
    Student x = {30,"Karn tiwari","Ayodhya",20,"A"};
    print(x);
    return 0;
}


// STRUCTURE ALLIGNMENT

// Datatype ( including int ,float, double,...)
//having allignment requirements.
 //A structure has allignment requirements same as its largest members requirembent


#include<iostream>
using namespace std;
struct s1 
{
    char c1;
    double d1;
    char c2;
};
struct s2
{
    char c1;
    double d1;
    char c2;
};
int main()
{
    cout<<sizeof(s1)<<" "<<sizeof(s2)<<endl;
    
}

/* REASON FOR ALLIGNMENT 
1. Physical memory is accesed in the form of word
(4 bytes in a 32 bit machine and 8 bytes in a 64 bit machine)

without alignment , it is inefficient to store variable that span access multiple words.
struct
{
    char c1; 
    char c2;
    double d1;

}
 NOTE == If we remove alignment , then a 64 bit CPU would two cycles to read di
*/

//.......for compact representation of structure

#include<iostream>
using namespace std;
struct s1;
{
    double d1;
    char c1;
    char c2;

}__attribute__((packed));
int main()
{
    cout<<sizeof(s1);
    
}


//Write a C++ program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum.
#include<iostream>
using namespace std;
int test(int x , int y)
{
    if (x == y)
    {
       return (x+y)*3;
    }
    else
    return (x+y);
    
}

int main()
{
    cout<<test(1,2)<<endl;
    cout<<test(2,3)<<endl;
    cout<<test(2,2)<<endl;
    return 0;
}


//Write a C++ program to get the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference.
#include<iostream>
using namespace std;
int abs(int n)
{
    const int x = 51;
    if (n>x)
    {
        return (n-x)*3;
    }
    return 
    (n-x);
    
}
int main()
{
    cout<<abs(53)<<endl;
    cout<<abs(30)<<endl;
    cout<<abs(51)<<endl;
    return 0;
}


//Write a C++ program to check two given integers, and return true if one of them is 30 or if their sum is 30.
#includea<iostream>
using namespace std;
bool test(int x, int y)
{
    return x == 30|| y == 30 || (x + y = 30);
}
int main()
{
cout<<test(30,0)<<endl;
cout<<test(25,5)<<endl;
cout<<test(20,30)<<endl;
cout<<test(20,25)<<endl;
return 0;
}

//Write a C++ program to check a given integer and return true if it is within 10 of 100 or 200.
#include<iostream>
using namespace std;
bool test(int x)
{
    if(( (x-100)<=10)|| ((x-200)<=10))
    {
        return true;
    }
    return false;

}
int main()
{
    cout<<test(103)<<endl;
    cout<<test(90)<<endl;
    cout<<test(89)<<endl;
    return 0;


}

//Write a C++ program to create a new string where 'if' is added to the front of a given string. If the string already begins with 'if', return the string unchanged.
#include<iostream>
using namespace std;
string test (string s)
{
    if (s.length() > 2 && s.substr(0,2) == "if")

    {
         return s;
    }
    return "if " + s;

    
}
int main()
{
    cout<<test("if else")<<endl;
    cout<<test("else")<<endl;
    return 0;
}

//Write a C++ program to remove the character in a given position of a given string. The given position will be in the range 0..string length -1 inclusive.
#include <iostream>

using namespace std;

string test(string str, int n)
{
    return str.erase(n,1);
}
int main() 
 {
  cout << test("Python", 1) << endl;  
  cout << test("Python", 0) << endl;  
  cout << test("Python", 4) << endl;  
  return 0;    
}

//7. Write a C++ program to exchange the first and last characters in a given string and return the new string.

#include<iostream>
using namespace std;
int swap(int,int);
int main()
{

}
int swap(int &x , int &y)
{
    
}



// passing string
#include<iostream>
using namespace std;
int lenght(char[]);
void main()
{
    char str = "karn"
    int l;
    l = length(str);
    l = str();
    cout<<l<<endl;
}
int length(char str[])
{
    int i, l =0;
    for ( i = 0; str[i]!='\0'; i++)
    { 
        l++;
    }
    return l;
    
}