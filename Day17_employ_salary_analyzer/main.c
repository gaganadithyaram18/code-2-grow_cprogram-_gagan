#include <stdio.h>

int main()
 {
    char name[50], regNo[20], section[5];
    int employ,  choice;
    float salaries[10];
    float total = 0, average = 0, highest, lowest;
    int above_Avg = 0, below_Avg = 0;
    float temp;

    printf("========= Employee Salary Analysis System =========\n");

    // Student details
    printf("Enter Student Name: ");
    scanf(" %s", name);
    printf("\nEnter Registration Number: ");
    scanf(" %s", regNo);
    printf("\nEnter Section: ");
    scanf(" %s", section);

    // Employee data
    printf("\nEnter number of employees (max 10): ");
    scanf("%d", &employ);

    if (employ > 10 || employ <= 0)
    {
        printf("Invalid number of employees. Exiting...\n");
        return 0;
    }

    printf("Enter salaries:\n");
    for (int i = 0; i < employ; i++)
     {
        printf("employ %d salary is: ", i + 1);
        scanf("%f", &salaries[i]);
    }

    // Menu loop
    do {
        printf("\n========= Menu =========\n");
        printf("1. Display All Salaries\n");
        printf("2. Display Total and Average Salary\n");
        printf("3. Display Highest and Lowest Salary\n");
        printf("4. Count Above/Below Average\n");
        printf("5. Display Sorted Salaries \n");
        printf("6. Exit\n");
        printf("========================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Reset totals
        total = 0;
        for (int i = 0; i < employ; i++)
         {
            total += salaries[i];
        }
        average = total / employ;

        if (choice == 1) 
        {
            printf("\n--- All Salaries ---\n");
            for (int i = 0; i < employ; i++)
             {
                printf("Employee %d: %f\n", i + 1, salaries[i]);
            }
        }

        else if (choice == 2) 
        {
            printf("\nTotal Salary = %f\n", total);
            printf("Average Salary = %f\n", average);
        }

        else if (choice == 3)
         {
            highest = salaries[0];
            lowest = salaries[0];
            for (int i = 1; i < employ; i++) 
            {
                if (salaries[i] > highest)
                    highest = salaries[i];
                if (salaries[i] < lowest)
                    lowest = salaries[i];
            }
            printf("\nHighest Salary = %f\n", highest);
            printf("Lowest Salary = %f\n", lowest);
        }

        else if (choice == 4) 
        {
            above_Avg = 0;
            below_Avg = 0;
            for (int i = 0; i < employ; i++) {
                if (salaries[i] > average)
                    above_Avg++;
                else if (salaries[i] < average)
                    below_Avg++;
            }
            printf("\nEmployees Above Average: %d\n", above_Avg);
            printf("Employees Below Average: %d\n", below_Avg);
        }

        else if (choice == 5)
         {
            // low to high
            for (int i = 0; i < employ - 1; i++) 
            {
                for (int j = 0; j < employ - i - 1; j++) 
                {
                    if (salaries[j] > salaries[j + 1]) 
                    {
                        temp = salaries[j];
                        salaries[j] = salaries[j + 1];
                        salaries[j + 1] = temp;
                    }
                }
            }
            printf("\nSorted Salary \n");
            for (int i = 0; i < employ; i++) 
            {
                printf("%f ", salaries[i]);
            }
            printf("\n");
        }

        else if (choice == 6) 
        {
            printf("\nExiting program...\n");
        }

        else
         {
            printf("\nInvalid choice! Please try again.\n");
        }

        if (choice != 6) {
            printf("\nSubmitted by: %s | Reg No: %s | Section: %s\n", name, regNo, section);
        }

    } while (choice != 6);

    printf("Submitted by: %s | Reg No: %s | Section: %s\n", name, regNo, section);
    printf("Challenge Day 17 - Code2Grow Program\n");

    return 0;
}
