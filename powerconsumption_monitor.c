#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
// Structure to represent a power consumption sensor 
typedef struct { 
 int device_id; 
 float power_usage; 
} PowerConsumptionSensor; 
// Function to generate random power usage data 
float generatePowerUsage() { 
 return (rand() % 100) + 1; // Simulate power usage in watts (0-100W) 
} 
// Function to monitor activity and power consumption 
void monitorActivity(PowerConsumptionSensor* sensors, int numSensors) { 
 while (1) { 
 for (int i = 0; i < numSensors; i++) { 
 sensors[i].power_usage = generatePowerUsage();
printf("Device %d - Power Usage: %.2f W\n", sensors[i].device_id,  
sensors[i].power_usage); 
 } 
 sleep(5); // Simulate monitoring every 5 seconds 
 } 
} 
int main() { 
 srand(time(NULL)); // Seed the random number generator 
 int numSensors = 2; // Change this to the number of sensors you have 
 PowerConsumptionSensor sensors[numSensors]; 
 // Initialize sensor data 
 for (int i = 0; i < numSensors; i++) { 
 sensors[i].device_id = i + 1; 
 sensors[i].power_usage = 0.0; 
 } 
 printf("Power Consumption and Activity Monitor Started:\n"); 
 monitorActivity(sensors, numSensors); 
 return 0; 
}
