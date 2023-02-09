#include <iostream>
#include <string>
#include "Teacher.h"
#include "Department.h"

int main()
{
  // Create a teacher outside the scope of the Department
  Teacher bob{ "Bob" }; // create a teacher

  {
    // Create a department and use the constructor parameter to pass
    // the teacher to it.
    Department department{ bob };

  } // department goes out of scope here and is destroyed

  // bob still exists here, but the department doesn't

  std::cout << bob.getName() << " still exists!\n";

  return 0;
}

// SOURCE: https://www.learncpp.com/cpp-tutorial/aggregation/