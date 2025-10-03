#ifndef STUDENT_H
#define STUDENT_H

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

void addStudent();
void displayStudent();
void searchStudent();
void deleteStudent();
void updateStudent();



#endif