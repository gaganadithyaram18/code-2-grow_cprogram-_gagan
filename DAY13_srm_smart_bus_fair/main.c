#include <stdio.h>
// BASE_FARE_PER_KM 10
//MIN_FARE 20

int main() 
{
    int num_passengers,BASE_FAREPER_KM=10,MINFARE=10 ;
    int age, distance, time;
    float base_fare, fare, total_revenue = 0;
    float highest_fare = 0, lowest_fare = 0;
    char name[50];

    printf("========= SRM Smart Bus Fare Calculator =========\n");
    printf("Enter number of passengers: ");
    scanf("%d", &num_passengers);

    for (int i = 1; i <= num_passengers; i++)
     {
        printf("--- Passenger %d ---\n", i);

        printf("Enter name: ");
        scanf("%s", name);

        printf("Enter age: ");
        scanf("%d", &age);

        printf("Enter distance (in km): ");
        scanf("%d", &distance);

        printf("Enter travel time (24-hour format): ");
        scanf("%d", &time);

        base_fare = BASE_FAREPER_KM * distance;
        fare = base_fare;

        // Discount logic
        if (age < 12) 
        {
            fare = fare * 0.5;//CHILDREN DISCOUNT 50%
            printf("Passenger: %s | Base Fare: %f | Child Discount Applied", name, base_fare);
        } else if (age >= 60) 
        {
            fare = fare * 0.7;//SENIOR CITIZEN 30%
            printf("Passenger: %s | Base Fare: %f | Senior Citizen Discount Applied", name, base_fare);
        } else
         {
            printf("Passenger: %s | Base Fare: %f", name, base_fare);
        }

        // Peak hour surcharge
        if ((time >= 8 && time < 10) || (time >= 17 && time < 20))
         {
            fare = fare * 1.2;//PEAK HOUR CHARGES APPLIED
            printf("  Peak Hour Surcharge Applied");
        }

        // IF FARE IS LESSS THAN MIN FAIR THEN DISCOUNT NOT APPLICABLE 
        if (fare < MINFARE) 
        {
            fare = MINFARE;
        }

        printf("  Final Fare: %f\n", fare);

        total_revenue = total_revenue + fare;
        if (i == 1) 
        {
            lowest_fare = fare;
            highest_fare = fare;
        } else
         {
            if (fare < lowest_fare)
             {
                lowest_fare = fare;
            }
            if (fare > highest_fare)
             {
                highest_fare = fare;
            }
        }
    }

    printf("DAILY SUMMARY\n");
    printf("Total Passengers: %d\n", num_passengers);
    printf("Total Revenue Collected: %f\n", total_revenue);
    printf("Highest Fare: %f\n", highest_fare);
    printf("Lowest Fare: %f\n", lowest_fare);

    return 0;
}
