//Encapsulation(data hiding):
//Wrapping up of data and information in a single unit,while controlling access to them

#include<bits/stdc++.h>
using namespace std;

class Customer
{
    string name;
    int account_number,balance,age;

    public:
    Customer(string name,int account_number,int balance,int age)
    {
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
        this->age=age;
    }

    void deposit(int amount)
    {
        if(amount>0)
        {
            balance+=amount;
        }
        else
        cout<<"Invalid amount"<<endl;
    }

    void withdraw(int amount)
    {
        if(amount<=balance && amount>0)
        {
            balance-=amount;
        }
        else
        cout<<"Invalid amount entered"<<endl;
    }

    void updateage(int age)
    {
        if(age>0 && age<100)
        {
            this->age=age;
        }
    }
    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<age<<endl;
    }

};
int main()
{
        Customer A1("Rohit",1,1000,3);
        Customer A2("Sohan",2,2000,4);
        Customer A3("Kohan",3,3000,8);
        A1.display();
        A1.deposit(-10);
        A1.updateage(24);
        A1.deposit(2000);
        A1.display();
}