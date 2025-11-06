#include <stdio.h>

int main() {
    int totalStudents;
    float mark1, mark2, mark3, total, avg;
    int passed = 0, failed = 0;
    float classTotal = 0, highestAvg = 0, lowestAvg = 100;
    int choice;

    printf("Smart Student Result Management\n");
    printf("Enter number of students: ");
    scanf("%d", &totalStudents);

    float averages[100];
    char grades[100][5];

    for (int i = 0; i < totalStudents; i++) {
        printf("--- Student %d ---\n", i + 1);
        printf("Enter marks for Subject 1: ");
        scanf("%f", &mark1);
        printf("Enter marks for Subject 2: ");
        scanf("%f", &mark2);
        printf("Enter marks for Subject 3: ");
        scanf("%f", &mark3);

        total = mark1 + mark2 + mark3;
        avg = total / 3.0;
        averages[i] = avg;
        classTotal += avg;

        if (avg > highestAvg)
            highestAvg = avg;
        if (avg < lowestAvg)
            lowestAvg = avg;

        if (avg >= 90)
            sprintf(grades[i], "A+");
        else if (avg >= 80)
            sprintf(grades[i], "A");
        else if (avg >= 70)
            sprintf(grades[i], "B");
        else if (avg >= 60)
            sprintf(grades[i], "C");
        else if (avg >= 50)
            sprintf(grades[i], "D");
        else
            sprintf(grades[i], "F");

        if (avg >= 50)
            passed++;
        else
            failed++;
    }

    do {
        printf("\n========= Menu =========\n");
        printf("1. View All Results\n");
        printf("2. View Class Summary\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\n--- Result Sheet ---\n");
            for (int i = 0; i < totalStudents; i++) {
                printf("Student %d: Avg = %.2f | Grade = %s\n", i + 1, averages[i], grades[i]);
            }
        } else if (choice == 2) {
            printf("\n--- Class Summary ---\n");
            printf("Total Students: %d\n", totalStudents);
            printf("Passed: %d\n", passed);
            printf("Failed: %d\n", failed);
            printf("Class Average: %.2f\n", classTotal / totalStudents);
            printf("Highest Average: %.2f\n", highestAvg);
            printf("Lowest Average: %.2f\n", lowestAvg);
        } else if (choice == 3) {
            printf("Thank you! Exiting system...\n");
        } else {
            printf("Invalid choice. Try again.\n");
        }
    } while (choice != 3);

    return 0;
}
