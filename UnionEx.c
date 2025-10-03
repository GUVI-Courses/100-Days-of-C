#include <stdio.h>
#include <stdlib.h>

typedef union Student{
    int ID;
    double average;
}student;
int main()
{
    /*union Student student1;
    union Student *ptrStudent2;
    
    student1.ID = 5;
    printf("student.ID = %d\n", student1.ID);

    ptrStudent2 = &student1;
    ptrStudent2->ID = 10;
    printf("student.ID = %d\n", student1.ID);*/
    int i;
    student studentArray[3];

    for(i=0;i<3;i++)
    {
        printf("Enter ID #%d: ",i+1);
        scanf("%d", &studentArray[i].ID);
    }
    for(i=0;i<3;i++)
    {
        printf("Student #%d ID = %d\n", i+1, studentArray[i].ID);
    }

}