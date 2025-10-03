#include <stdio.h>
#include "student.h"

int main()
{
    int choice;
    do{
        printf("\n-- Student Record Management-----\n");
        printf("1. Add Student\n");
        printf("2. Display all Student\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Update Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice)
        {
            case 1: addStudent(); break;
            case 2: displayStudent(); break;
            case 3: searchStudent(); break;
            case 4: deleteStudent(); break;
            case 5: updateStudent(); break;
            case 6: printf("Exiting....\n"); break;
            default: printf("Invalid choice\n");
        }
    }while(choice != 6);
    return 0;
}