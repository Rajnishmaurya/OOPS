#include<bits/stdc++.h>
using namespace std;

class customer
{
    string name;
    int *data;

    public:

    customer(string name)
    {
        this->name=name;
        cout<<"Constructor is called "<<name<<endl;
    }

    // Default constructor
    customer()
    {
        name="rohit";
        data=new int;
        *data=10;
        cout<<"Customer is called "<<endl;
    }

    //Destructor (it is called in the last)
    ~customer()
    {
       // delete data;   //releases dynamically memory
        cout<<"Destructor is called "<<name<<endl;
    }


};

int main()
{
     customer A1("1"),A2("2"),A3("3");
}