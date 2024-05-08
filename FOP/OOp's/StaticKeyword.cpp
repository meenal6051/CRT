// Example of instance variable
#include<iostream>
using namespace std;

class Student{
    int roll;
    string name;
    const static int cm = 7500;
    public:
    Student(int roll, string name){
        this->roll=roll;
        this->name=name;
    }
    void display(){
        cout<<"Student Details: "<<endl<<"Roll No.:"<<roll<<" "<<"Name:"<<name<<" "<<"Caution Money:"<<cm<<endl;
    }
};

// Definition of static variable
// int Student::cm = 7500;

int main(){
    Student s1(101,"Ravi");
    s1.display();
    Student s2(102,"Kinjal");
    s2.display();
    Student s3(103,"Komal");
    s3.display();
    Student s4(104,"Meenal");
    s4.display();
    return 0;
}

