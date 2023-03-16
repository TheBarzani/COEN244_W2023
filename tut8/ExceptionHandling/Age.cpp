#include <iostream>
using namespace std;
 
class age {
    int num;
 
public:
    age(int x)
    {
        try {
 
            if (x == 0)
                // catch block would be called
                throw "Age of zero is not allowed ";
 
            num = x;
            show();
        }
 
        catch (const char* exp) {
            cout << "Exception caught: ";
            cout << exp << endl;
        }
    }
 
    void show()
    {
        cout << "Age = " << num << endl;
    }
};
 
int main()
{
 
    // constructor will be called
    cout << endl;
    age(0);
    cout << "Again creating object \n";
    age(1);
    cout << endl;
}