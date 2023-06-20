#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Point;

float calculate_distance(Point p1, Point p2) {
    float distance = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
    return distance;
}

int main() {
    Point p1, p2;

    printf("Enter the coordinates of Point 1:\n");
    printf("X-coordinate: ");
    scanf("%f", &p1.x);
    printf("Y-coordinate: ");
    scanf("%f", &p1.y);

    printf("Enter the coordinates of Point 2:\n");
    printf("X-coordinate: ");
    scanf("%f", &p2.x);
    printf("Y-coordinate: ");
    scanf("%f", &p2.y);

    float distance = calculate_distance(p1, p2);
    printf("The distance between the two points is: %.2f\n", distance);

    return 0;
}