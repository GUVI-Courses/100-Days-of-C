#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"



// Function to add a student
void addStudent() {
    FILE *f = fopen("students.dat", "ab");
    if (!f) {
        printf("Error opening file.\n");
        return;
    }

    struct Student s;

    printf("Enter Roll No: ");
    scanf("%d", &s.rollNo);
    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(s), 1, f);
    fclose(f);
    printf("Student record added successfully!\n");
}
// Function to display all students
void displayStudents() {
    FILE *f = fopen("students.dat", "rb");
    struct Student s;

    if (!f) {
        printf("No records found.\n");
        return;
    }

    printf("\n--- All Student Records ---\n");
    while (fread(&s, sizeof(s), 1, f)) {
        printf("Roll No: %d\nName: %s\nMarks: %.2f\n\n", s.rollNo, s.name, s.marks);
    }
    fclose(f);
}

// Function to search for a student
void searchStudent() {
    FILE *f = fopen("students.dat", "rb");
    struct Student s;
    int roll, found = 0;

    if (!f) {
        printf("No records found.\n");
        return;
    }

    printf("Enter Roll No to search: ");
    scanf("%d", &roll);

    while (fread(&s, sizeof(s), 1, f)) {
        if (s.rollNo == roll) {
            printf("Found:\nRoll No: %d\nName: %s\nMarks: %.2f\n", s.rollNo, s.name, s.marks);
            found = 1;
            break;
        }
    }
    if (!found) printf("Student not found.\n");
    fclose(f);
}

// Function to delete a student
void deleteStudent() {
    FILE *f = fopen("students.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");
    struct Student s;
    int roll, found = 0;

    if (!f || !temp) {
        printf("Error opening file.\n");
        return;
    }

    printf("Enter Roll No to delete: ");
    scanf("%d", &roll);

    while (fread(&s, sizeof(s), 1, f)) {
        if (s.rollNo != roll)
            fwrite(&s, sizeof(s), 1, temp);
        else
            found = 1;
    }
    fclose(f);
    fclose(temp);
    remove("students.dat");
    rename("temp.dat", "students.dat");

    if (found) printf("Record deleted successfully!\n");
    else printf("Student not found.\n");
}

// Function to update a student
void updateStudent() {
    FILE *f = fopen("students.dat", "rb+");
    struct Student s;
    int roll, found = 0;

    if (!f) {
        printf("No records found.\n");
        return;
    }

    printf("Enter Roll No to update: ");
    scanf("%d", &roll);
    getchar(); // clear newline from input buffer

    while (fread(&s, sizeof(s), 1, f)) {
        if (s.rollNo == roll) {
            printf("Enter New Name: ");
            scanf(" %[^\n]", s.name);

            printf("Enter New Marks: ");
            scanf("%f", &s.marks);

            fseek(f, -sizeof(s), SEEK_CUR);
            fwrite(&s, sizeof(s), 1, f);
            found = 1;
            break;
        }
    }
    fclose(f);

    if (found) printf("Record updated successfully!\n");
    else printf("Student not found.\n");
}

// Main function
int main() {
    int choice;
    do {
        printf("\n--- Student Record Management ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Update Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // clear newline from input buffer

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: deleteStudent(); break;
            case 5: updateStudent(); break;
            case 6: printf("Exiting...\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while (choice != 6);

    return 0;
}
