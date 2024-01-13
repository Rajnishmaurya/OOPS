#include<bits/stdc++.h>
using namespace std;

class a 
{
    int b;
};

class b
{
    char s;
    char d;
    int c;
};

class d
{
    char s;
    char d;
    int c;
    double f;
};

class e   // empty class takes 1 byte storage   
{

};

// Q.why the size of empty class is 1 byte
//(Ans:   In C++, Size of empty structure/class will be one byte as because to call function at least empty structure should have some size ( minimum 1 byte is required ) i.e. one byte. The same happens with the Classes as well they must require One byte of memory to make them distinguishable.)
//Q. Padding in class for size of a class?
int main()
{
    a a1;
    cout<<sizeof(a1)<<endl;
    b b1;
    cout<<sizeof(b1)<<endl;

    e e1;
    cout<<sizeof(e1)<<endl;

   d d1;
   cout<<sizeof(d1)<<endl;
}
