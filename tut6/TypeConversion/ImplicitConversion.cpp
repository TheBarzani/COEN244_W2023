#include <iostream>
using namespace std;

// Base class
class Person
{
    private:
        string name;
        int age;

    public: 
        // Constructor:
        Person(string str, int n){
            name = str;
            age = n;
        };
        
        //Default Constructor
        Person(){}

        // Access methods
        int getAge(void) const { return age; }
        void setAge( int n ) { age = n; }

        const string& getName() const{ return name; }

        void display(){
            cout<<"The Name of Person is "<<name<<" and age is "<<age<<".\n";
        }
};

//Derived Class
class Student: public Person 
{
    private:
        string standard;
        float grades;

    public:
    // Constructor:
    Student(string strName, int age, string std) : Person(strName, age) {
        standard = std;
    }
    
    //Default Constructor
    Student(){}
    
    //Access Methods
    const string& getStandard() const{ return standard; }
    void setStandard( const string std) { standard = std; }

    float getGrades() const { return grades; }
    void setGrades( float g ) { grades = g; }

    //Overloaded Function
    void display(){
        cout<<"The Student "<<getName()<<" is in "<<standard<<" with current grade "<<grades<<".\n";
    }
};


int main(){
    /**
     * In implicit type conversion on the public interface of the base class 
     * is accessible which means the additional functionalities are unknown.
    */


    //=======================================================================
    // Base Class Objects Assignment
    Student s1("John", 19, "UnderGraduate");
    Person p1;
    
    //This p1 object can only access the Public Interface of Person Class
    p1 = s1;
    p1.display();     // will use the display method of Person Class
    cout << p1.getName();
    cout << endl << endl;
    
    //=======================================================================
    //Base Class Pointer Assignment
    Student s2("Brian", 20, "UnderGraduate");
    Person *personPointer = &s2;

    personPointer->display();
    cout<<personPointer->getName();
    cout << endl << endl;

    //=======================================================================
    //Reference Variable of Base Class
    Student s3("Michelle", 24, "Graduate");

    Person &baseReference = s3;

    baseReference.display();
    cout<<baseReference.getAge();

    // // Attempt of Assignment to the Reference to another similar object
    // Student s4;
    // s4 = baseReference; // will cause an error: no match for ‘operator=’ (operand types are ‘Student’ and ‘Person’)

}

// Code inspired by: https://www.scaler.com/topics/cpp/type-conversions-in-class-hierarchies/