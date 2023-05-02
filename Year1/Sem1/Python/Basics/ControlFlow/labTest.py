lab_grade = 0
final_grade = 0

first_test = float(input())
second_test = float(input())
exam = float(input())

lab_grade = (first_test + second_test) / 2

if lab_grade > 5 and exam > 5:

    final_grade = (70 * lab_grade + 30 * exam) / 100

    print(final_grade)
else:
    print("failed")
    
