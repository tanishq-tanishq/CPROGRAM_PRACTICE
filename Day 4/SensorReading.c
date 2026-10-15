#include<stdio.h>

typedef union SensorReading
{
    float temperature;
    char door[1];
    int pulseCounter;
};

typedef struct Sensor {
    int sendorID;
    char tag[20];
    union SensorReading readings;
} Sensor;

int main() {
    int n;
    printf("Enter the value:\n");
    scanf("%d",&n);
    
    if(n <= 0) {
        printf("INVALID VALUE");
        return 1;
    }

    


}
