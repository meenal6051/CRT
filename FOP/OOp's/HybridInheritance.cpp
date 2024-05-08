#include <iostream> 
using namespace std; 

class A 
{ 
	protected: 
	int a;
    int mult;
	public: 
	void get_a() 
	{ 
	cout << "Enter the value of 'a' is : "; 
	cin>>a; 
	} 
}; 

class B : public A 
{ 
	protected: 
	int b; 
	public: 
	void get_b() 
	{ 
	cout << "Enter the value of 'b' is : ";
	cin>>b; 
	} 
}; 
class C : public A
{ 
	protected: 
	int c; 
	public: 
	void get_c() 
	{ 
		cout << "Enter the value of 'c' is : "; 
		cin>>c; 
	} 
}; 

class D : public B, public C 
{ 
	protected: 
	int d; 
	public:
    int mult;
	void mul(){ 
        C::get_a();                    // Specify that you're calling get_a() from class A
        B::get_b();                    // Specify that you're calling get_b() from class B
        C::get_c();                    // Specify that you're calling get_c() from class C
        mult = C::a * B::b * C::c;
        cout << "Multiplication of a, b, c is : " << mult; 
	} 
}; 


int main() 
{ 
	D d; 
	d.mul(); 
	return 0; 
}
