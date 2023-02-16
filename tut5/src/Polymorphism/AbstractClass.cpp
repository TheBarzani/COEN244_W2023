#include<iostream>
using namespace std;

// An abstract class with constructor
class Base
{
    protected:
        int x;
    public:
        /**
         * fun() is a pure virtual function, hence it must 
         * implemented in the derived class else the derived
         * will also be an abstract class.
        */
        virtual void fun() = 0; 
        // void fun() = 0; //ERROR
        /**
         * An abstract class can still have function but they 
         * can only be called by the derived class
        */
        
        void check(){cout << "This is a check!"<< endl;}
        Base(int i) {
			x = i;
			cout<<"Constructor of base called\n";
		}
};

class Derived: public Base
{
    private:
	    int y;
    public:
	    Derived(int i, int j):Base(i) { y = j; }
	    void fun() { cout << "x = " << x << ", y = " << y<<'\n'; }
};

int main(void)
{
    // Base b; // ERROR
	Derived d(4, 5);
	d.fun();
	
    //object creation using pointer of base class
	Base *ptr=new Derived(6,7);
	ptr->fun();

    d.check();
	return 0;
}
