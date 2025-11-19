#include <stdio.h>
#include <stdlib.h>

#define MAX 30 //max=max no of vehicles

void inputData(int id[], int speed[], int lane[], int num_vehicles);
int countSpeedViolations(int speed[], int num_vehicles);
int countLaneViolations(int id[], int lane[], int num_vechicles);
void displayReport(int id[], int speed[], int lane[], int num_vehicles);

int main() 
{

    int id[MAX], speed[MAX], lane[MAX];
    int num_vehicles;

    inputData(id, speed, lane, &num_vehicles);

    int speedVoilation = countSpeedViolations(speed, num_vehicles);
    int laneVoilation  = countLaneViolations(id, lane, num_vehicles);

    displayReport(id, speed, lane, num_vehicles);

    printf("\nTotal Speed Violations = %d\n", speedVoilation);
    printf("Total Lane Violations  = %d\n", laneVoilation);

    return 0;
}

void inputData(int id[], int speed[], int lane[], int num_vehicles)
{
    printf("Enter number of vehicles (max 30): ");
    scanf("%d", &num_vehicles);

    if (num_vehicles > MAX) num_vehicles = MAX;

    for(int i = 0; i < num_vehicles; i++)
    {
        printf("\nVehicle %d ID: ", i+1);
        scanf("%d", &id[i]);

            
            do{
                printf("Speed: ");
            scanf("%d", &speed[i]);
        }while(speed[i] <= 0);

        while(lane[i] < 1 || lane[i] > 4){
            printf("Lane (1-4): ");
            scanf("%d", &lane[i]);
        } 
    }
}

int countSpeedViolations(int speed[], int num_vechicles){
    int count = 0;
    for(int i = 0; i < num_vechicles; i++){
        if(speed[i] > 80)
            count++;
    }
    return count;
}

int countLaneViolations(int id[], int lane[], int num_vehicles){
    int count = 0;

    for(int i = 0; i < num_vehicles; i++){
        int expected = id[i] % 4;
        if(expected == 0) expected = 4;

        if(expected != lane[i])
            count++;
    }
    return count;
}

void displayReport(int id[], int speed[], int lane[], int num_vehicles){
    printf("\nVehID\tSpeed\tLane\tSpeedVoilation\tLaneV0ilation\n");

    for(int i = 0; i < num_vehicles; i++){
        int speedVoilation = (speed[i] > 80);

        int expected = id[i] % 4;
        if(expected == 0) expected = 4;
        int laneVoilation = (expected != lane[i]);

        printf("%d\t%d\t%d\t%d\t%d\n",
               id[i], speed[i], lane[i], speedVoilation, laneVoilation);
    }
}
