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

    //=======================================================================
    //Upcast Conversion
    //Creation of student object
    Student s1("XYZ", 19, "UnderGraduate");
    s1.setGrades(9.2);
    
    Person* personPointer = &s1;
    static_cast<Student*>(personPointer)->display();

    cout << endl;
    static_cast<Student*>(personPointer)->setStandard("PostGraduate");
    static_cast<Student*>(personPointer)->display();

    cout << endl;
    //=======================================================================
    //Downcast Conversion ((Not recommended as some ambiguity can be introduced)
    Person* personPointer2 = new Student("ABDE", 19, "Bachelors of Science Degree");
    
    Student* studentPointer = static_cast<Student*>(personPointer2);

    studentPointer->setGrades(7.9);
    studentPointer->display();
}


// Code inspired by: https://www.scaler.com/topics/cpp/type-conversions-in-class-hierarchies/