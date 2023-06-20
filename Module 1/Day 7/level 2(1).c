#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
} Student;

void add_member(Student** students, int* count, int newId, const char* newName) {
    // Increase the count of students
    (*count)++;

    // Reallocate memory for the updated number of students
    *students = (Student*)realloc(*students, (*count) * sizeof(Student));

    // Add the new member at the end
    Student* newMember = *students + (*count) - 1;
    newMember->id = newId;
    strcpy(newMember->name, newName);
}

int main() {
    Student* students = NULL;
    int count = 0;

    // Add initial members
    add_member(&students, &count, 1, "John Doe");
    add_member(&students, &count, 2, "Jane Smith");

    // Print the members
    for (int i = 0; i < count; i++) {
        printf("Member %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("\n");
    }

    // Add a new member
    add_member(&students, &count, 3, "Michael Johnson");

    printf("After adding a new member:\n");
    for (int i = 0; i < count; i++) {
        printf("Member %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("\n");
    }

    // Free the memory allocated for the array of structures
    free(students);

    return 0;
}