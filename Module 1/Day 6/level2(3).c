#include <stdio.h>

#define MAX_STUDENTS 100

typedef struct {
    char name[50];
    int rollNumber;
    float marks;
} Student;

void read_student_data(Student* students, int count) {
    for (int i = 0; i < count; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }
}

void write_student_data(Student* students, int count) {
    printf("Student Data:\n");
    for (int i = 0; i < count; i++) {
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

float calculate_average_marks(Student* students, int count) {
    float totalMarks = 0.0;
    for (int i = 0; i < count; i++) {
        totalMarks += students[i].marks;
    }
    float averageMarks = totalMarks / count;
    return averageMarks;
}

void print_students_above_average(Student* students, int count, float averageMarks) {
    printf("Students above average marks:\n");
    for (int i = 0; i < count; i++) {
        if (students[i].marks > averageMarks) {
            printf("Name: %s\n", students[i].name);
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Marks: %.2f\n", students[i].marks);
            printf("\n");
        }
    }
}

void print_students_below_average(Student* students, int count, float averageMarks) {
    printf("Students below average marks:\n");
    for (int i = 0; i < count; i++) {
        if (students[i].marks < averageMarks) {
            printf("Name: %s\n", students[i].name);
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Marks: %.2f\n", students[i].marks);
            printf("\n");
        }
    }
}

int main() {
    int count;
    Student students[MAX_STUDENTS];

    printf("Enter the number of students: ");
    scanf("%d", &count);

    read_student_data(students, count);

    write_student_data(students, count);

    float averageMarks = calculate_average_marks(students, count);
    printf("Average Marks: %.2f\n\n", averageMarks);

    print_students_above_average(students, count, averageMarks);

    print_students_below_average(students, count, averageMarks);

    return 0;
}