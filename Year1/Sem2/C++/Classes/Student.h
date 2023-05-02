#ifndef STUDENT_H
#define STUDENT_H

class Student
{
    public:
        Student(const char * name, float labGrade, float examGrade);
        
        Student(const Student& other);
        
        ~Student();

        void print();

        void add_bonus(double bonus);

        float getLabGrade();

        float getExamgrade();

        float getFinalGrade();

        char *getName();

    private:
        char * _name;
        float _labGrade;
        float _examGrade;
        float _finalGrade;
};

#endif