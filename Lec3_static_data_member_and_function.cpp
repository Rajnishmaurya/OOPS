// static data member and function
// static keyword are attrbutes of classes or class member
//static member function
//const keyword (Homework)
#include<bits/stdc++.h>
using namespace std;

class Customer
{
    string name;
    int account_number;
    int balance;
    static int total_customer;
    static int total_balance;

    public:
    Customer(string name,int account_number,int balance)
    {
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
        total_customer++;
        total_balance+=balance;
    }


    //static member function(only static valriable can be access)
    static void accessStatic()
    {
        cout<<"Total number of Customer"<<total_customer<<endl;
        cout<<total_balance<<endl;
    }
 
    void deposit(int amount)
    {
        if(amount>0)
        {
            balance+=amount;
            total_balance+=balance;
        }
    }

    void withdraw(int amount)
    {
        if(amount<=balance && amount>0)
        {
            balance-=amount;
            total_balance-=amount;
        }
    }

    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl; 
    }

    void display_total()
    {
        cout<<total_customer<<endl;
        cout<<total_balance<<endl;
    }
};

int Customer::total_customer=0;
int Customer::total_balance=0;

int main()
{
    Customer A1("Rajnish",1,1000);
    Customer A2("Ramesh",2,2000);
    //A1.display();
    //A2.display();
    Customer A3("CHohit",3,5566);
    //A3.display();
    //A3.display_total();
    Customer::accessStatic();
    A1.display_total();
    A1.deposit(300);

}