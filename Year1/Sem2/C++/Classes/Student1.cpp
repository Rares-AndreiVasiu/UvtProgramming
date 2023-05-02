#include <iostream>
#include <string>

#include "Student1.h"

//implement here the class functions

Student::Student(std::string name, float labGrade, float examGrade)
{
    this -> _labGrade = labGrade;

    this -> _examGrade = examGrade;

    this -> _name = name;

    this ->_finalGrade = (examGrade + labGrade) / 2;
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

std::string Student::getName()
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
    std::string name;

    float l_grade, e_grade;

    std::cin >> name >> l_grade >> e_grade;

    Student s{name, l_grade, e_grade};

    s.print();

    s.add_bonus(0.5);

    s.print();

    return 0;
}