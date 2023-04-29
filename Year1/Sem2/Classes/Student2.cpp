#include <iostream>
#include <cstring>

#include "Student.h"

#define MAXLENGTH 512
//implement here the class functions

Student::Student(const char* name, float labGrade, float examGrade)
{
    this -> _labGrade = labGrade;

    this -> _examGrade = examGrade;

    this ->_finalGrade = (examGrade + labGrade) / 2;

    this -> _name = new char[MAXLENGTH];

    strncpy(this ->_name, name, MAXLENGTH);
}

Student::Student(const Student& other)
{
    this -> _labGrade = other._labGrade;

    this -> _finalGrade = other._finalGrade;

    this -> _examGrade = other._examGrade;

    this -> _name = new char[MAXLENGTH];

    strncpy(this ->_name, other._name, MAXLENGTH);
}

Student::~Student()
{
    delete [] this -> _name;
}

float Student::getLabGrade()
{
    return this -> _labGrade;
}

float Student::getExamgrade()
{
    return this -> _examGrade;
}

float Student::getFinalGrade()
{
    return this -> _finalGrade;
}

char *Student::getName()
{
    return this -> _name;
}

void Student::print()
{
    std::cout << this -> _name << " " << this -> _finalGrade << '\n';
}

void Student::add_bonus(double bonus)
{
    this -> _labGrade += bonus;

    this -> _finalGrade += (bonus / 2);
}

int main()
{
  char name[MAXLENGTH];

  float l_grade, e_grade;
  
  std::cin >> name >> l_grade >> e_grade;
  
  Student s{name, l_grade, e_grade};
  
  s.print();
  
  s.add_bonus(0.5);
  
  s.print();
  
  return 0;
}
