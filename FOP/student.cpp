// #include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Student{
    int roll;
    string name;

    public:
    void input();
    void output();
    
};
int main()
{
    Student s1;
    Student s2;
    Student *s3 = new Student;

    cout<<"\n\nFill the data of S1";
    s1.input();
    cout<<"\n\nFill the data of S2";
    s2.input();
    cout<<"\n\nFill the data of S3";
    s3->input();

    cout<<"\nAll Data Saved.";
    s1.output();
    s2.output();
    s3->output();

    return 0;
}

void Student::input()   // Scope Resolution Operator
    {
        cout<<"\n Enter roll no. : ";
        cin >> roll;
        cout<<"\n Enter name : ";
        cin >> name;
    }
inline void Student::output()
    {
        cout<<"\nRoll: "<<roll;
        cout<<"\nName: "<<name;
    }