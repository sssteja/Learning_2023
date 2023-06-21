#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

typedef struct {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char time[10];
} LogEntry;

void swap(LogEntry* a, LogEntry* b) {
    LogEntry temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    const char* filename = "data.csv";
    const char* tempFilename = "temp.csv";

    // Open the input file
    FILE* inputFile = fopen(filename, "r");
    if (inputFile == NULL) {
        printf("Failed to open