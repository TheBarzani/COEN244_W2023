#include <iostream>
using namespace std;
class Temp
{
    private:
        int x = 10;
        double x1 = 10.1;
    public:
        void add(int y)
        {
           cout << "Value of x + y is: " << x + y << endl;
        }
        // Differ in the type of argument.
        void add(double d)
        {
           cout << "Value of x+d is: " << x1 + d << endl;
        }
        // Differ in the number of arguments.
        void add(int y, int z)
        {
           cout << "Value of x+y+z is: " << x + y + z << endl;
        }
};
int main() {
    Temp t1;
    t1.add(10);
    t1.add(11.1);
    t1.add(12,13);
	
    return 0;
}
