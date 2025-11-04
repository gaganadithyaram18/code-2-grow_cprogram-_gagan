#include <stdio.h>
int main() 
{
    int choice,transaction_count=0,max_transaction=5;
    float balance = 10000.0,updated_balance;
    float amount;

    printf("Welcome to mini bank transaction\n");
    
    do {//USING DO LOOP TO CONTINUE UNTIL USER EXITS
          
        printf("1. check balance \n");
        printf("2. deposit\n");
        printf("3.withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 2) 
        {
            // Deposit
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            printf("amount deposited successfully!\n");
            updated_balance=amount+balance; 
            printf("final balance after deposited: %f\n", updated_balance);
            

        }
         else if (choice == 3)
        {
            // Withdraw
            printf("Enter amount to withdraw: ");
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
                printf(" remaining balance is: %f\n", updated_balance);
            }

        }
         else if (choice == 1) 
         {
            balance=updated_balance;
            printf("Current Balance: %f\n", balance);//check balance

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
        if (choice>1 && choice<=3)
        {
            transaction_count++;
        }
        
        if (transaction_count==max_transaction && choice!=4)
        {
            printf("max transaction session ended automatically");
            
        }   
    } 
    while (choice!=4);
    printf("transaction summery\n");
    printf("total transaction%d\n",transaction_count);
    printf("final balance%f\n",updated_balance);
    return 0;
}
