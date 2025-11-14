##NAME GAGAN ADITHYA RAM
## REGISTRATION NO AP25110090156

#include <stdio.h>
int main() 
{
    int productID[10], quantity[10];
    float price[10],value;
    char name[10][50];
    float highest_value,lowest_value;
    int count = 0,id;  // number of products entered

    int choice, i;

    do
    {

        printf("\n===== INVENTORY MANAGEMENT MENU =====\n");
        printf("1. Enter Product Details\n");
        printf("2. Display All Products\n");
        printf("3. Show Inventory Value, Highest & Lowest Value Product\n");
        printf("4. Search Product by ID\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count >= 10)
             {
                printf("Cannot add more than 10  products \n");
            } 
            else
             {
                printf("\nEnter Product ID: ");
                scanf("%d", &productID[count]);

                printf("\nEnter Product Name: ");
                scanf("%s", name[count]); // read string with spaces

                printf("\nEnter Quantity: ");
                scanf("%d", &quantity[count]);

                printf("\nEnter Price: ");
                scanf("%f", &price[count]);

                count++;
                printf("Product added successfully!\n");
            }
        }

        else if (choice == 2) 
        {
            if (count == 0) 
            {
                printf("No products available.\n");
            } 
            else
             {
                printf("\n----- PRODUCT LIST -----\n");
                for (i = 0; i < count; i++) {
                    printf("\nProduct %d:\n", i + 1);
                    printf("ID: %d\n", productID[i]);
                    printf("Name: %s\n", name[i]);
                    printf("Quantity: %d\n", quantity[i]);
                    printf("Price: %.2f\n", price[i]);
                }
            }
        }

        else if (choice == 3) 
        {
            if (count == 0) 
            {
                printf("No products to analyze.\n");
            }
             else 
            {
                float totalValue = 0;
                 highest_value = quantity[0] * price[0];
                 lowest_value = quantity[0] * price[0];
                int highIndex = 0, lowIndex = 0;

                for (i = 0; i < count; i++)
                 {
                    value = quantity[i] * price[i];
                    totalValue += value;

                    if (value > highest_value) {
                        highest_value = value;
                        highIndex = i;
                    }
                    if (value < lowest_value) {
                        lowest_value = value;
                        lowIndex = i;
                    }
                }

                printf("\nTotal Inventory Value = %f\n", totalValue);

                printf("\nProduct with Highest Value:\n");
                printf("ID: %d, Name: %s, Value: %f\n",productID[highIndex], name[highIndex], highest_value);

                printf("\nProduct with Lowest Value:\n");
                printf("ID: %d, Name: %s, Value: %f\n",productID[lowIndex], name[lowIndex], lowest_value);
            }
        }

              else if (choice == 4) 
                 {
                if (count == 0)
                 {
                printf("No products stored.\n");
                 } 
                else 
                {
                int  found = 0;
                printf("Enter Product ID to search: ");
                scanf("%d", &id);

                for (i = 0; i < count; i++) 
                {
                    if (productID[i] == id)
                     {
                        found = 1;
                        printf("\nProduct Found!\n");
                        printf("ID: %d\n", productID[i]);
                        printf("Name: %s\n", name[i]);
                        printf("Quantity: %d\n", quantity[i]);
                        printf("Price: %.2f\n", price[i]);
                        break;
                    }
                }

                if (!found)
                 {
                    printf("Product with ID %d not found.\n", id);
                }
            }
        }

        else if (choice == 5)
         {
            printf("Exiting program. Goodbye!\n");
            break;
        }

        else
         {
            printf("Invalid choice! Try again.\n");
        }
    }while (choice!=5);
    

    return 0;
}
