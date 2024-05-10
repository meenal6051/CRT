#include<iostream>>
using namespace std;

class Employee {
    private:
    // Private attribute
    int salary;

    public:
    // Setter
    void setSalary(int s){
        salary = s;
    }
    // Getter
    int getSalary(){
        return salary;
    }
};
int main(){
    Employee e;
    e.setSalary(50000);
    cout<<e.getSalary();
    return 0;
}