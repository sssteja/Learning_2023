#include <stdio.h>
#include <string.h>

#define MAX_DATA_LENGTH 100

typedef struct {
    char sensorID[10];
    float temperature;
    int humidity;
    int lightIntensity;
} SensorData;

void parse_data(const char* data, SensorData* sensor) {
    char buffer[MAX_DATA_LENGTH];
    strcpy(buffer, data);

    char* token = strtok(buffer, "-");
    while (token != NULL) {
        char key[10];
        char value[10];
        sscanf(token, "%[^:]:%s", key, value);

        if (strcmp(key, "S") == 0)
            strcpy(sensor->sensorID, value);
        else if (strcmp(key, "T") == 0)
            sensor->temperature = atof(value);
        else if (strcmp(key, "H") == 0)
            sensor->humidity = atoi(value);
        else if (strcmp(key, "L") == 0)
            sensor->lightIntensity = atoi(value);

        token = strtok(NULL, "-");
    }
}

void print_sensor_info(const SensorData* sensor) {
    printf("Sensor Info:\n");
    printf("---------------------\n");
    printf("Sensor ID: %s\n", sensor->sensorID);
    printf("Temperature: %.1f C\n", sensor->temperature);
    printf("Humidity: %d\n", sensor->humidity);
    printf("Light Intensity: %d%%\n", sensor->lightIntensity);
}

int main() {
    const char* data = "S1-T:36.5-H:100-L:50";
    SensorData sensor;

    parse_data(data, &sensor);
    print_sensor_info(&sensor);

    return 0;
}