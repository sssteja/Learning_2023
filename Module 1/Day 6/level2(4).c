#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[50];
} Student;

Student* modify_student_data(Student* student) {
    // Modify the members of the structure
    student->id += 1;
    sprintf(student->name, "%s (Modified)", student->name);

    return student;
}

int main() {
    Student* student = (Student*)malloc(sizeof(Student));

    // Initialize the structure
    student->id = 1;
    strcpy(student->name, "John Doe");

    printf("Before modification:\n");
    printf("ID: %d\n", student->id);
    printf("Name: %s\n", student->name);
    printf("\n");

    // Pass the pointer to the structure to the function and get the modified pointer back
    Student* modifiedStudent = modify_student_data(student);

    printf("After modification:\n");
    printf("ID: %d\n", modifiedStudent->id);
    printf("Name: %s\n", modifiedStudent->name);

    // Free the memory allocated for the structure
    free(student);

    return 0;
}