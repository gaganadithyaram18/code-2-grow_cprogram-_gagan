#include <stdio.h>

int main() 
{
    // Fixed menu data
    int itemnumber[5]={1,2,3,4,5};
    char itemNames[5][20] = {"Coffee", "Tea", "Sandwich", "Burger", "Pastry"};
    int itemPrices[5] = {50, 30, 80, 120, 60};
    int max_item=5;
    int max_coustamer=10;
    int numItems, itemNo, quantity;
    int customerTotal = 0,total;

    int totalItemsOrdered[5] = {0}; // To count how many times each item was ordered
    int totalRevenue = 0;
    int totalItemsSold = 0;
    int numCustomers;

    printf("========= Cafe Order Management System =========\n");

    // Ask for number of customers
    printf("Enter total number of customers (max 10): ");
    scanf("%d", &numCustomers);

    if (numCustomers < 1 || numCustomers > 10) 
    {
        printf("Invalid number of customers\n");
        
    }

    // Display menu
    printf("\n========= MENU =========\n");
    printf("Item No.\tItem Name\tPrice \n");
    for (int i = 1; i <= max_item; i++) 
    {
        printf("%d\t\t%s\t\t%d\n", itemnumber[i], itemNames[i], itemPrices[i]);
    }

    // Process orders for each customer
    for (int j= 1; j<= numCustomers; j++) 
    {
        
        printf("--- Customer %d ---\n",j );
        printf("Enter number of items: ");
        scanf("%d", &numItems);

        for (int k = 1; k <= numItems; k++)
         {
            printf("Enter item number and quantity: ");
            scanf("%d %d", &itemNo, &quantity);
            
            if (itemNo < 1 || itemNo > 5 || quantity < 1)
             {
                printf("Invalid input! Try again.\n");
                j--; // repeat this iteration
                continue;
            }

            int index = itemNo - 1;
            int cost = itemPrices[index] * quantity;
            customerTotal += cost;
            totalRevenue += cost;
            totalItemsOrdered[index] += quantity;
            totalItemsSold += quantity;
        }

        printf("Total Bill for Customer %d: %d\n\n", j , customerTotal);
    }

    // Calculate most and least ordered items
    int mostOrdered = 0, leastOrdered = 0;
    for (int i = 1; i < max_item; i++)
     {
        if (totalItemsOrdered[i] > totalItemsOrdered[mostOrdered])
            mostOrdered = i;
        if (totalItemsOrdered[i] < totalItemsOrdered[leastOrdered])
            leastOrdered = i;
    }

    // Display Cafe Summary
    printf("========= Cafe Summary =========\n");
    printf("Total Revenue: %d\n", totalRevenue);
    printf("Total Items Sold: %d\n", totalItemsSold);
    printf("Most Ordered Item: %s\n", itemNames[mostOrdered]);
    printf("Least Ordered Item: %s\n", itemNames[leastOrdered]);
    return 0;
}
