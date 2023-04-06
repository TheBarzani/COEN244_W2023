#include <iostream>

using namespace std;

inline int subtract(int x, int y) { //inline function to subtract two numbers
  return x - y;
}
inline int add(int a, int b) { // inline function to add two numbers
  return a + b;
}

// Main function
int main() {
  cout << add(1, 11) << endl; // This is same as: cout << (1+11) << endl;
  cout << subtract(100, 75) << endl;// // This is same as: cout << (100-75) << endl;
  return 0;
}