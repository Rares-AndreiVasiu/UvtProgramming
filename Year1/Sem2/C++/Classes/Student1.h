#ifndef STUDENT1_H
#define STUDENT1_H  

class Student
{
    public:
        Student(std::string name, float labGrade, float examGrade);
        
        void print();

        void add_bonus(double bonus);

        float getLabGrade();

        float getExamgrade();

        float getFinalGrade();

        std::string getName();

    private:
        std::string _name;

        float _labGrade;
        
        float _examGrade;
        
        float _finalGrade;
};

#endif