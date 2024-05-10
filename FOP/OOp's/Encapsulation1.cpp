#include<iostream>
using namespace std;

class Student {
    private:
    int rollno;
    string name;
    char grade;

    public:
    void setRollno(int r){
        rollno = r;
    }
    int getRollno(){
        return rollno;
    }
    void setName(string s){
        name = s;
    }
    string getName(){
        return name;
    }
    void setGrade(char g){
        grade = g;
    }
    char getGrade(){
        return grade;
    }
};

int main(){
    Student s;
    s.setRollno(142);
    cout<<s.getRollno()<<endl;

    s.setName("Mohini Suragini");
    cout<<s.getName()<<endl;

    s.setGrade('A');
    cout<<s.getGrade()<<endl;

    return 0;
}