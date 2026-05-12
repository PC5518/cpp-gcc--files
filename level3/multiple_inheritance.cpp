#include <iostream>
class Person {
public:
    int age;
};
class student: public Person {
    int marks;
    int gpa;
};
class employee : public Person {
    int salary;
    int working_hours;
};
class Teaching_Assitant: public student,  public employee  {
    int research_output;
};
// so basically two copies of person is created and it's regarded as a diamond problem.