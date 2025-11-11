#include <stdio.h>

int main()
{
    int n;
    int marks[10];
    int Aplus = 0, A = 0, B = 0, C = 0, D = 0, Fail = 0;
    int totalPassed = 0, totalFailed = 0;
    int highest_marks, lowest_marks;
    float sum = 0.0, avg;

    printf("========= Student Performance Analyzer =========\n");
    printf("Enter total number of students: ");
    scanf("%d", &n);

    if (n < 1 || n > 10)
     {
        printf("Invalid number of students. Please enter up to 10.\n");
        return 0;
    }

    printf("Enter marks for each student:\n");
    for (int i = 0; i <n; i++)
     {
        printf("Student %d: ", i+1);
        scanf("%d", &marks[i]);

        if (marks[i] < 0 || marks[i] > 100) 
        {
            printf("Invalid marks entered. Please enter marks between 0 and 100.\n");
            return 0;
        }
    }

    highest_marks = lowest_marks = marks[0];

    for (int i = 0; i < n; i++)
     {
        sum += marks[i];

        if (marks[i] > highest_marks)
            highest_marks = marks[i];
        if (marks[i] < lowest_marks)
            lowest_marks = marks[i];

        if (marks[i] >= 90) {
            Aplus++;
            totalPassed++;
        } else if (marks[i] >= 80) {
            A++;
            totalPassed++;
        } else if (marks[i] >= 70) {
            B++;
            totalPassed++;
        } else if (marks[i] >= 60) {
            C++;
            totalPassed++;
        } else if (marks[i] >= 50) {
            D++;
            totalPassed++;
        } else {
            Fail++;
            totalFailed++;
        }
    }

    avg = sum / n;

    printf("========= Result Summary =========\n");
    printf("Average Marks: %f\n", avg);
    printf("Highest Marks: %d\n", highest_marks);
    printf("Lowest Marks: %d\n", lowest_marks);
    printf("Total Passed Students: %d\n", totalPassed);
    printf("Total Failed Students: %d\n", totalFailed);

    printf("Grade Distribution:\n");
    printf("A+ : %d\n", Aplus);
    printf("A  : %d\n", A);
    printf("B  : %d\n", B);
    printf("C  : %d\n", C);
    printf("D  : %d\n", D);
    printf("Fail: %d\n",Fail);
    return 0;
}
