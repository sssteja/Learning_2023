#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

float calculateVolume(struct Box* box) {
    return box->length * box->width * box->height;
}

float calculateSurfaceArea(struct Box* box) {
    return 2 * (box->length * box->width + box->length * box->height + box->width * box->height);
}

int main() {
    struct Box myBox;
    struct Box* boxPtr = &myBox;

    // Assign values to the box dimensions
    myBox.length = 3.5;
    myBox.width = 2.8;
    myBox.height = 4.2;

    // Calculate volume and surface area using pointer with (*) and (.)
    float volume = calculateVolume(&myBox);
    float surfaceArea = calculateSurfaceArea(&myBox);

    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    // Calculate volume and surface area using pointer with (->)
    float volumePtr = calculateVolume(boxPtr);
    float surfaceAreaPtr = calculateSurfaceArea(boxPtr);

    printf("Volume (using pointer): %.2f\n", volumePtr);
    printf("Surface Area (using pointer): %.2f\n", surfaceAreaPtr);

    return 0;
}