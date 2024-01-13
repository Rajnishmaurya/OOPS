#include<bits/stdc++.h>
using namespace std;

class Student
{
    private:
    string name;
    int age,roll_no;
    string grade;

    // Function Getter and Setter
    public:
    void setname(string s)
    {
        name=s;
    }
    void setage(int a)
    {
        age=a;
    }
    void setrollno(int roll)
    {
        roll_no=roll;
    }
    void setgrade(string s)
    {
        grade=s;
    }

    void getname()
    {
        cout<<name<<endl;
    }
    void getage()
    {
        cout<<age<<endl;
    }
    int getroll_no()
    {
        return roll_no;
    }
};

int main()
{
    Student S1;
    S1.setname("Rajnish Maurya");
    S1.setage(20);
    S1.setgrade("A+");
    S1.setrollno(4586);
    S1.getname();
    S1.getage();
    cout<<S1.getroll_no()<<endl;
    
}
