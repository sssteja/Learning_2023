#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
} Student;

void swap_members(Student* students, int index1, int index2) {
    Student temp = students[index1];
    students[index1] = students[index2];
    students[index2] = temp;
}

int main() {
    Student students[5];

    // Populate the array of structures
    students[0].id = 1;
    strcpy(students[0].name, "John Doe");

    students[1].id = 2;
    strcpy(students[1].name, "Jane Smith");

    students[2].id = 3;
    strcpy(students[2].name, "Michael Johnson");

    students[3].id = 4;
    strcpy(students[3].name, "Emily Davis");

    students[4].id = 5;
    strcpy(students[4].name, "Robert Williams");

    // Print the members before swapping
    printf("Before swapping:\n");
    for (int i = 0; i < 5; i++) {
        printf("Member %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("\n");
    }

    int index1, index2;

    printf("Enter the indexes of members to swap (0-4): ");
    scanf("%d %d", &index1, &index2);

    // Check if the indexes are valid
    if (index1 < 0 || index1 >= 5 || index2 < 0 || index2 >= 5) {
        printf("Invalid indexes.\n");
        return 0;
    }

    // Swap the members
    swap_members(students, index1, index2);

    // Print the members after swapping
    printf("After swapping:\n");
    for (int i = 0; i < 5; i++) {
        printf("Member %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("\n");
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
} Student;

void rotate_array(Student* students, int size, int k) {
    // Create a temporary array to hold the rotated elements
    Student* temp = (Student*)malloc(k * sizeof(Student));

    // Copy the last K elements to the temporary array
    memcpy(temp, &students[size - k], k * sizeof(Student));

    // Shift the remaining elements to the right
    memmove(&students[k], students, (size - k) * sizeof(Student));

    // Copy the rotated elements back to the original array
    memcpy(students, temp, k * sizeof(Student));

    // Free the temporary array
    free(temp);
}

int main() {
    Student students[6];

    // Populate the array of structures
    students[0].id = 1;
    strcpy(students[0].name, "John Doe");

    students[1].id = 2;
    strcpy(students[1].name, "Jane Smith");

    students[2].id = 3;
    strcpy(students[2].name, "Michael Johnson");

    students[3].id = 4;
    strcpy(students[3].name, "Emily Davis");

    students[4].id = 5;
    strcpy(students[4].name, "Robert Williams");

    students[5].id = 6;
    strcpy(students[5].name, "Sophia Brown");

    // Print the members before rotation
    printf("Before rotation:\n");
    for (int i = 0; i < 6; i++) {
        printf("Member %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("\n");
    }

    int k;
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);

    // Rotate the array by K positions
    rotate_array(students, 6, k);

    // Print the members after rotation
    printf("After rotation:\n");
    for (int i = 0; i < 6; i++) {
        printf("Member %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("\n");
    }

    return 0;
}