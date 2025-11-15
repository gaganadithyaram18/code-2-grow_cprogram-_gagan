### Name:T.GAGAN ADITHYA RAM
### REGISTRATION NUMBER:AP25110090156

#include <stdio.h>
int main() 
{
    int attendance[5][5];
    int marks[5][5];
    char names[5][20];
    int i, j, choice;
    int total_attendance[5] = {0}, total_absent[5] = {0};
    int total[5] = {0};
    float avg_marks[5];
    int highest_att = 0, lowest_att = 0;
    int highest_marks = 0, lowest_marks = 0;
    char grades;
    printf("Enter names of 5 students:\n");
    for(i = 0; i < 5; i++) 
    {
        printf("Student %d: ", i + 1);
        scanf("%s", names[i]);
    }

    printf("\nEnter Attendance Matrix (1 = Present, 0 = Absent):\n");
    for(i = 0; i < 5; i++)
    {
        printf("Attendence for %s is:\n", names[i]);
        for(j = 0; j < 5; j++)
         {
            scanf("%d", &attendance[i][j]);
        }
}

    printf("\nEnter Marks Matrix (0-100):\n");
    for(i = 0; i < 5; i++) 
    {
        printf("Marks for %s:\n", names[i]);
        for(j = 0; j < 5; j++) 
        {
            scanf("%d", &marks[i][j]);
        }
    }

    
      
      do{
        printf("\n========= MENU =========\n");
        printf("1. Display Attendance Matrix\n");
        printf("2. Display Marks Matrix\n");
        printf("3. Attendance Report\n");
        printf("4. Performance Report\n");
        printf("5. Grade Report\n");
        printf("6. Exit\n");
        printf("========================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
  
            case 1:  
                printf("\nAttendance Matrix:\n");
                for(i = 0; i < 5; i++) {
                    printf("%s:\t", names[i]);
                    for(j = 0; j < 5; j++) {
                        printf("%d ", attendance[i][j]);
                    }
                    printf("\n");
                }
                break;
           
            case 2:  
                printf("\nMarks Matrix:\n");
                for(i = 0; i < 5; i++) {
                    printf("%s:\t", names[i]);
                    for(j = 0; j < 5; j++) {
                        printf("%d ", marks[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3: 
            {
                int totalPresent[5];
                int total_absent[5];
                int highest_att = -1, lowest_att = 100;
                int highIndex = 0, lowIndex = 0;

                printf("\n===== Attendance Report =====\n");

                for(i = 0; i < 5; i++) {
                    totalPresent[i] = 0;

                    for(j = 0; j < 5; j++) {
                        totalPresent[i] += attendance[i][j];
                    }

                    total_absent[i] = 5 - totalPresent[i];

                    // Highest attendance
                    if(totalPresent[i] > highest_att) {
                        highest_att = totalPresent[i];
                        highIndex = i;
                    }

                    // Lowest attendance
                    if(totalPresent[i] < lowest_att) {
                        lowest_att = totalPresent[i];
                        lowIndex = i;
                    }
                }

                for(i = 0; i < 5; i++)
                {
                    printf("%s Present: %d, Absent: %d\n",
                           names[i], totalPresent[i], total_absent[i]);
                }

                printf("\nHighest Attendance: %s (%d days)\n", names[highIndex], highest_att);
                printf("Lowest Attendance: %s (%d days)\n", names[lowIndex], lowest_att);
            }
                break;

            case 4:  
            {
                int total[5];
                int avg_marks[5];
                int highest_marks = -1, lowest_marks = 9999;
                int highIndex = 0, lowIndex = 0;

                printf("\n===== Performance Report =====\n");

                for(i = 0; i < 5; i++) {
                    total[i] = 0;

                    for(j = 0; j < 5; j++) {
                        total[i] += marks[i][j];
                    }

                    avg_marks[i] = total[i] / 5;

                    if(total[i] > highest_marks) {
                        highest_marks = total[i];
                        highIndex = i;
                    }

                    if(total[i] < lowest_marks) {
                        lowest_marks = total[i];
                        lowIndex = i;
                    }
                }

                for(i = 0; i < 5; i++) {
                    printf("%s Total: %d, Average: %d\n",
                           names[i], total[i], avg_marks[i]);
                }

                printf("\nClass Topper: %s (%d marks)\n", names[highIndex], highest_marks);
                printf("Lowest Performer: %s (%d marks)\n", names[lowIndex], lowest_marks);
            }
                break;
   
            case 5:  // Grade Report
            {
                int total;

                printf("\n===== Grade Report =====\n");

                for(i = 0; i < 5; i++) {
                    total = 0;

                    for(j = 0; j < 5; j++) {
                        total += marks[i][j];
                    }

                    avg_marks[i] = total / 5.0;

                    // Grade assignment and printing
                    if(avg_marks[i] >= 90.0 && avg_marks<=100) printf("%sAverage: %f, Grade: A+\n", names[i], avg_marks[i]);
                    else if(avg_marks[i] >= 80.0 && avg_marks[i] <= 89.0) printf("%sAverage: %f, Grade: A\n", names[i], avg_marks[i]);
                    else if(avg_marks[i] >= 70.0 && avg_marks[i] <= 79.0) printf("%s Average: %f, Grade: B\n", names[i], avg_marks[i]);
                    else if(avg_marks[i] >= 60.0 && avg_marks[i] <= 69.0) printf("%s Average: %f, Grade: C\n", names[i], avg_marks[i]);
                    else if(avg_marks[i] >= 50.0 && avg_marks[i] <= 59.0) printf("%s Average: %f, Grade: D\n", names[i], avg_marks[i]);
                    else printf("%s Average: %f, Grade: FAIL\n", names[i], avg_marks[i]);
                }
            }
                break;

            // -----------------------------
            case 6:
                printf("\nExiting program...\n");
                break;

            default:
                printf("\nInvalid choice. Try again.\n");
        }
    }while (choice!=6);  

    return 0;
}
