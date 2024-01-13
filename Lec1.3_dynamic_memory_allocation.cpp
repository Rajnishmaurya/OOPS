#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int age,roll;
    string grade;
};

int main()
{
    Student *S=new Student;
    (*S).name="Rajnish Maurya";
    (*S).age=20;
    (*S).roll=378;
    (*S).grade="A+";

    cout<<S->name<<endl;
    cout<<S->age<<endl;
    cout<<S->roll<<endl;
    cout<<S->grade<<endl;
}
