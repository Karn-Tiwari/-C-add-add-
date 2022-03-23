// TRY, THROW AND CATCH in C++
/*

try{
    //the code that may throw exception
}

throw: used to throw an exception

catch: one or more catch blocks are used to handle the exception

*/
// Progam as an example
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    try
    {
        if (y == 0)
            throw 0; // after this line control will goes to catch line

        cout << "Result is : " << x / y;
    }
    catch (int x) // we write int x because we throw exception int value that is 0

    {
        cout << "Divisor is zero";
    }
    return 0;
}
//
#include<iostream>
using namespace std;
int main()
{
    double x,y;
    cin>>x>>y;
    try{
        if(x==0.0)
        throw 0;// after this control goes to catch 1 and after that it will print BYE

        if(y==0.0)
        throw string("y is zero");
        if(x+y < 0.0)
        throw(x+y);
    }
    catch(int e1)
    {
        cout<<e1;
    }
    catch(string &e2)
    {
        cout<<e2;
    }
    catch(...)// if we write triple dot ... it means it will handle all the data types

    
    {
        cout<<"x+y is less than 0";
    }
    cout<<"\nBye";
    return 0;
}


// Real world problem by try , throw and catch in c++
#include<iostream>
#include<cstring>
using namespace std;
int average(int arr[], int n)
{
    if(n==0)
    throw string("array size is zero");
    int sum =0;
    for (int i = 0; i <n; i++)
    
        /* code */
        sum = sum + arr[i];
        return sum/n;
    
    
}
int main()
{
    int arr[] = {4,5,6};
    int n = 0;
    try{
        int res = average(arr,n);
        cout<<res;
    }
    catch(string &e)
    {
        cout<<e;

    }
    cout<<"\nBye";
    return 0;

}


// STACK UNWINDING in Exceoption Handling

// Stack Wnwinding => when a function throws an exception and it doesnot have any handle that 
//goes out of the function calling stack and if caller does not have handle then goues out of the funciton callstack and then it goes to 
 //main funciton and if it find then the rest of the program is exutable this is call stack unwinding

#include<iostream>
#include<cstring>         
using namespace std;
void f1() throw(int)
{
    cout<<"f1 Begins\n";
    throw 100;// find throw so it searching catch and control go back to f2

    cout<<"f1 ends";

}
void f2() throw(int)// f2 also has not any catch so control go back to main function in search of CATCH

{
    cout<<"f2 Begins\n";
    f1();// f1 calling
    cout<<"f2 Ends\n";
}
int main()
{
    try{
        f2();// calling f2

    }
    catch(int i)// Now  compiler finds catch block and it executes the exceptoin

    {
        cout<<"Caught Exception\n";

    }
    cout<<"Bye\n";
}


// USER DEFINED EXCEPTION 
#include<iostream>
#include<exception>
class ArarySizeZeroException{};
class ArraySizeNegativeException{};
int average(int arr[],int n)
{
    if(n==0) throw ArraySizeZero();
    if(n<0) throw ArraySizeNegative();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
    sum = sum + arr[i];

    }
    return sum/n;
    
}
int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];

    }
    try
    {
        int res = average(arr,n);
        cout<<res;

    }
    catch(ArraySizeZeroException &e1)
   
    {
        cout<<"Array size is Zero";

    }
      catch(ArraySizeNegativeException &e2)
   
    {
        cout<<"Array size is Negative";

    }
    return 0;
}



// FUNCTION POINTER...
//Example 1

#include<iostream>
using namespace std;
void fun()
{
    cout<<"KARN";


}
int main()
{
    void(*fun_ptr)() = fun;// auto fun_ptr = fun;
    fun_ptr();// (*fun_ptr)();
    return 0;
}


//Example 2..
#include<iostream>
using namespace std;
int fun(int x, int y)
{
    return (x+y);
}
int main()
{
    auto fun_ptr = fun;// int (*fun_ptr)(int,int) = fun;
    cout<<fun_ptr(10,20);
    return 0;
}

// example 3
#include<iostream>
using namespace std; 
int add(int x, int y){return (x+y);}
int multiply(int x,int y){return (x*y);}
int compute(int x, int y,int(*fun_ptr)(int,int))
{
    return fun_ptr(x,y);

}


int main()

{
    cout<<compute(10,20,add)<<"\n";
    cout<<compute(10,20,multiply)<<"\n";
    return 0;
}

// SORTING BY ABSOLUTE VALUE

#include<iostream>
#include<algorithm>

using namespace std;
bool compare(int x, int y){return abs(x)<abs(y);}
int main()
{
    int arr[] = {2,4,-1,8,-9};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,compare);
   //sort(arr,arr+n);
    for (int i = 0; i <n; i++)
        cout<<arr[i]<<" ";
        return 0;

    
}


// LAMBDA EXPRESSION => It is also called anonymous function without using functionality it can pass function ... and it is AWESOME
// It is provide a quick way of doing no need to pass funciton pointer or other functionality and no need write a seperate function

#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    int arr[] = {-20,10,-30,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,[](int a,int b){return abs(a)<abs(b);});
    for(auto x: arr)
    {
        cout<<x<<" ";
    }
    return 0;
}
//...........................
// [ ] this is cature list in which it denotes it can rsolve only those elements or parameter which are define for the sorting or in capture list


#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    int arr[] = {-20,10,-30,5};
    int n = sizeof(arr)/sizeof(arr[0]);
   auto myCmp = [](int a,int b){return abs(a)<abs(b);};// we can also create variable


   sort(arr,arr+n,myCmp);
    for(auto x: arr)
    {
        cout<<x<<" ";
    }
    return 0;
}

// FOR_EACH in lambda expression
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   vector<int>v{10,20,30};
    for_each(v.begin(),v.end(),[](int &x){x = x*5;});
    for_each(v.begin(),v.end(),[](int &x){cout<<x<<" ";});
    return 0;
}

// COUNT_IF in lambda expression
// it is check the condition in lambda expression if it is true then print the number of time it executes

#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v{10,5,3,20,100};
    int res = count_if(v.begin(), v.end(),[](int x){return x>=10;});

    cout<<res<<"\n";
    return 0;

}


#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v{10,5,3,20,100};
  auto it = find_if(v.begin(), v.end(),[](int x){return x>=10;});
// it finds the first element just before it

    cout<<*it<<"\n";
    return 0;

}

// ACCUMULATE() IN lambda
 //It does by default addition or we can done arithmatic opereation by providing initial _Temporary_value

#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    vector<int>v{10,2,4,20,1};
    int res = accumulate(v.begin(),v.end(),1);
    cout<<res<<"\n";
    res = accumulate(v.begin(),v.end(),[](int x,int y){return x*y;});
    cout<<res;
    return 0;
}


// CAPTURE LIST in Lambda Expression
/* 
[] : Nothing
[] : Everything by value
[] : Everything by reference
[] : Everything by value and x by reference.
[] : Everything by reference and x by value.

Static and global variables are always captured
*/
//[&]
#include<iostream>
using namespace std;
int main()
{
    int x = 5, y = 10;
    auto lambda_expr = [&](int a){
        x = x+a;
        y = y+a;

    };
    lambda_expr(20);
    cout<<x<<" "<<y<<"\n";
    return 0;
}

// [=]
#include<iostream>
using namespace std;
int main()
{
    int x = 5, y = 10;
    auto lambda_expr = [=](int a)mutable// by this keyword it helps in copy the value with read only
    {
        x = x+a;
        y = y+a;

    };
    lambda_expr(20);
    cout<<x<<" "<<y<<"\n";
    return 0;
}


// sort the array of integers
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> vec2 = {13,02,58,55,73,72,66,52,44,41,01,17,37,23,30,61,14,15,33,56,42,20,69,32,62,31,18,47,49,04,51,74,57,41,35,48,67,28,9,46,25,33,23,8,29,45,60,63,70,36,61,70,71,05,34,27,19,54,39,07,21,65,40};

vector<int> vec3 = {13,31,07,51,8,19,27,32,57,53,66,49,60,44,10,39,29,42,33,35,20,69,16,25,41,73,56,74,05,63,70,64,37,04,23,62,02,18,28,26,55,58,61,45,47,17,48,1,11,34,15,65,40,21,50,36,30,67,38,76,24,46,14,72,68,54,36,44,7,33};

vector<int> vec6 = {13,32,48,29,16,31,49,42,41,19,15,58,27,9,4,10,20,73,56,25,76,40,60,23,69,5,17,30,47,44,45,64,35,71,28,8,14,7,31,53,61,2,39,74,33,11,72,51,62,34,24,1,21,70,55,50,26,65,36,54,68,52,63,57,67};

vector<int> vec9 = {13,73,9,68,44,2,53,61,33,4,66,49,14,58,64,65,35,71,1,10,41,57,25,16,46,7,20,56,62,29,76,40,39,45,42,28,15,54,70,51,74,11,5,24,52,46,21,32,48,67,8,31,26,19,60,23,17,27,59,30,36,37};

vector<int> vec10 = {1,58,37,52,44,27,2,73,42,14,7,9,21,66,53,50,72,28,49,45,36,65,31,32,47,25,46,19,54,64,30,41,57,48,15,18,62,51,67,76,35,29,39,11,55,59,17,63,34,70,61,20,74,26,24,71,69,23,8,40,67,13,16,5,33,10,60};
int main()
{
    // int n = sizeof(arr) / sizeof(int);
    // sort(arr, arr + n); // this will sort the araay in ascending order
    // for (int i = 0; i < n; i++)
    //     cout << arr[i] << " ";
    // cout << endl;

    sort(vec2.begin(), vec2.end());
    for (int i = 0; i < vec2.size(); i++)
    {
        cout << vec2[i] << " ";
    }
    cout << endl;
    cout << vec2.size();
    cout << endl;
    cout << endl;

    sort(vec3.begin(), vec3.end());
    for (int i = 0; i < vec3.size(); i++)
    {
        cout << vec3[i] << " ";
    }
    cout << endl;
    cout << vec3.size();
    cout << endl;
    cout << endl;

    sort(vec6.begin(), vec6.end());
    for (int i = 0; i < vec6.size(); i++)
    {
        cout << vec6[i] << " ";
    }
    cout << endl;
    cout << vec6.size();
    cout << endl;
    cout << endl;

    sort(vec9.begin(), vec9.end());
    for (int i = 0; i < vec9.size(); i++)
    {
        cout << vec9[i] << " ";
    }
    cout << endl;
    cout << vec9.size();
    cout << endl;
    cout << endl;

    sort(vec10.begin(), vec10.end());
    for (int i = 0; i < vec10.size(); i++)
    {
        cout << vec10[i] << " ";
    }
    cout << endl;
    cout << vec10.size();
    cout << endl;
    cout << endl;

    return 0;
}


