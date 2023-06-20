#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
} Student;

void delete_member(Student** students, int* count) {
    if (*count == 0) {
        printf("No members to delete.\n");
        return;
    }

    // Shift the array elements to the left
    for (int i = 0; i < (*count) - 1; i++) {
        (*students)[i] = (*students)[i + 1];
    }

    // Decrease the count of students
    (*count)--;

    // Reallocate memory for the updated number of students
    *students = (Student*)realloc(*students, (*count) * sizeof(Student));
}

int main() {
    Student* students = NULL;
    int count = 0;

    // Add initial members
    students = (Student*)malloc(2 * sizeof(Student));
    count = 2;

    students[0].id = 1;
    strcpy(students[0].name, "John Doe");

    students[1].id = 2;
    strcpy(students[1].name, "Jane Smith");

    // Print the members
    for (int i = 0; i < count; i++) {
        printf("Member %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("\n");
    }

    // Delete a member from the start
    delete_member(&students, &count);

    printf("After deleting a member:\n");
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