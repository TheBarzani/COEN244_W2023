#ifndef _DEPARTMENT_H_
#define _DEPARTMENT_H_
#include "Teacher.h"

class Department
{
private:
  const Teacher& m_teacher; // This dept holds only one teacher for simplicity, but it could hold many teachers

public:
  Department(const Teacher& teacher)
      : m_teacher{ teacher }
  {
  }
};

#endif