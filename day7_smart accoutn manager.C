#include <stdio.h>

int main() 
{
    int choice;
    float balance = 10000.0,updated_balance;
    float amount, bonus;

    printf("Welcome to Smart Bank Account Manager\n");

    do {//USING DO LOOP TO CONTINUE UNTIL USER EXITS
          
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) 
        {
            // Deposit
            printf("Enter amount to deposit: ₹");
            scanf("%f", &amount);

            if (amount > 25000) 
            {              
                bonus=amount*0.01; // 1% bonus for deposits over 25000
                amount+=bonus;
            }
                printf("You received a bonus of: %f\n", bonus);
               updated_balance=amount+balance-5; // final balance after service charges
            printf("Service charges applied of rupees 5\n");
            printf("final balance after service charges: %f\n", updated_balance);
            

        }
         else if (choice == 2)
        {
            // Withdraw
            printf("Enter amount to withdraw: ₹");
            scanf("%f", &amount);

            if (amount > updated_balance)
            {
                printf("Insufficient balance! Withdrawal not allowed.\n");
            } 
            else 
            {
        
                balance=updated_balance- amount;
                updated_balance=balance; 
                printf("Withdrawal successful!\n");
                printf(" updated balance is: %f\n", updated_balance);
            }

        }
         else if (choice == 3) 
         {
            balance=updated_balance;
            printf("Current Balance: ₹%.2f\n", balance);//check balance

        } 
        else if (choice == 4)
         {
            // Exit
            printf("Thank you !\n");

        }
         else 
        {
            printf("Invalid choice! Please try again.\n");
        }

    } 
    while (choice != 4);

    return 0;
}