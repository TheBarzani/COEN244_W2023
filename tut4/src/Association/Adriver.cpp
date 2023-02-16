// Code cannot be compiled LOL


#include <iostream>
using namespace std;

class Student;

class Department
{
    char* name_p;
  
  public:

    Department(char *dName)
    {
      cout<<"Department::ctor\n";
      name_p = new char(sizeof(strlen(dName)));
      name_p = dName;
    }

    char* dName() const
    {
      return(name_p);
    }

    ~Department()
    {
      cout<<"Department::dtor\n";
      delete(name_p);
    }

};

class Student
{
  char* name_p;

  public:

    Student(char *sName)
    {
      cout<<"Student::ctor\n";
      name_p = new char(sizeof(strlen(sName)));
      name_p = sName;
    }

    char* sName()const
    {
      return(name_p);
    }
    
    ~Student()
    {
      cout<<"Student::dtor\n";
      delete(name_p);
    };
};


class Course
{
    Student * std_p;
    Department * dept_p;
    char * courseName_p;

    static unsigned int index;
    static Course *courseList[4];

  public:
    
    Course(char* crseName, Student* student, Department* dept):
      courseName_p(0), std_p(student), dept_p(dept)
    {
      cout<<"Course:ctor\n";

      if (index < 4)
      {
        courseName_p = new char(sizeof(strlen(crseName)));
        courseName_p = crseName;
        
        //insert this Course in courseList
        courseList[index] = this;
        ++index;
      }
      else
      {
        cout<<"Cannot accomodate any more Course\n";
      }
    };

    ~Course()
    { 
      cout<<"Course:dtor\n";
      delete (courseName_p);
    };

    static char* findStudent(char *crseName, char* deptName)
    {
      for(int i=0; i<index; i++)
      {
        if ( (courseList[i]->getCourseName() == crseName) && 
             (courseList[i]->getDeptName() == deptName) )
        {
          return(courseList[i]->getStdName());
        }
      }
    }

    char * getStdName()const {return(std_p->sName());};
    char * getDeptName() const {return(dept_p->dName());};
    char * getCourseName()const {return(courseName_p);};
}; 

unsigned int Course::index =0;
Course* Course::courseList[4] = {0,0,0,0};


int main()
{
  int i;

  cout<<"\nExample of Association class...\n";
  cout<<"-----------------------------------\n\n";

  cout<<"We have got 4 students ...\n";
  Student *studentNames[4] = {new Student("Meera"), new Student("Moina"), new Student("Teena"), new Student("Mridula")} ;

  cout<<"\n";

  cout<<"We have got 2 Departments...\n";
  Department *departNames[2] = {new Department("Mathemetics"), new Department("ComputerSceince")} ;
  
  cout<<"\n";

  cout<<"Here class Course Associates Student and Department, with a Course name ...\n";
  Course course1("DataStructure",studentNames[0], departNames[1]);
  Course course2("Maths",studentNames[3], departNames[0]);
  Course course3("Geometry",studentNames[2], departNames[0]);
  Course course4("CA",studentNames[1], departNames[1]);

  cout<<"\n";

  cout<<"Finding a Student using Course and Department...\n";
  cout<<"Student who has taken Maths Course in Mathemetics Department is:"<<Course::findStudent("Maths", "Mathemetics")<<endl;
  
  cout<<"\n";

  cout<<"Deletion of objects...\n\n";

  for(i=0; i<4; ++i)
  {
    delete studentNames[i];
  }

  cout<<"\n";

  for(i=0; i<2; ++i)
  {
    delete departNames[i];
  }

  cout<<"\n";

  return(0);
}