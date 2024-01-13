//Default construtor
//Parametarized constructor
//Constructor overloading 
//when to use this keyword
//inline constructor
//copy constructor

// Note: Constructor can not be redeclared
#include<bits/stdc++.h>
using namespace std;

class customer
{
    string name;
    int account_number;
    int balance;
    int *roi;
    
    public:
    //default constructor
    customer() 
    {
        cout<<"Constructor is called"<<endl;
        name="Rajnish";
        account_number=2334;
        balance=765;
        roi=new int[100];  //space will be declared into heap;
    }

    // parametarized constructor
   /* customer(string a,int b,int c) 
    {
        name=a;
        account_number=b;
        balance=c;
    }*/

    // constructor overloading
    customer(string a,int b) 
    {
        name=a;
        account_number=b;
    }

    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }

    // parametarized constructor
    /*customer(string name,int account_number ,int balance)  
    {
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
    }*/

    //inline constructor
    inline customer(string a,int b,int c):name(a),account_number(b),balance(c)
    {

    }

    //copy constructor
    customer(customer &A)
    {
        name=A.name;
        account_number=A.account_number;
        balance=A.balance;
    }
};

int main()
{
        customer A1;    // default constructor
        customer A2("Rajnish Maurya",5656,378);   // parameterized constructor
        customer A3("Mohit",56);   // constructor overloading
        A1.display();
        A2.display();
        A3.display();
        customer A4(A2);  //copy constructor 
        A4.display();

        customer A5;
        A5=A2;    //copy constructor
        A5.display();
}
