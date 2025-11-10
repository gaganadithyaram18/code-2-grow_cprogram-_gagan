#include <stdio.h>

int main()
 {
    int total_customers,rooms_booked = 0,total_revenue,highest_bill = 0,lowest_bill = 0;
    char name[50]; 
    int room_type;
    int days;
    char breakfast, wifi, gym;  
     int base_fare, additional_services;
    float subtotal, discount, gst, final_bill,net_bill;
    // Constants for rates and charges
   int DELUXE_RATE = 2500;
   int SUPER_DELUXE_RATE = 4000;
   int SUITE_RATE = 6000;
   int BREAKFAST_COST = 300;
   int WIFI_COST = 100;
   int GYM_COST = 200;

    printf("Smart Hotel Room Booking System\n");
    printf("Enter total number of customers: ");
    scanf("%d", &total_customers);

    
    for (int i = 1; i <= total_customers; i++)
     {  
        printf("--- Customer %d ---\n", i);
        printf("Enter name: \n");
        scanf(" %s", name);  
        printf("Enter room type (1-Deluxe, 2-Super Deluxe, 3-Suite): \n");
        scanf("%d", &room_type);
        printf("Enter number of days:\n ");
        scanf("%d", &days);
        printf("Breakfast (Y/N):\n ");
        scanf(" %c", &breakfast);
        printf("Wi-Fi (Y/N):\n ");
        scanf(" %c", &wifi);
        printf("Gym Access (Y/N):\n ");
        scanf(" %c", &gym);

        // Calculate base fare
        if (room_type == 1) 
        {
            base_fare = DELUXE_RATE * days;
        } 
        else if (room_type == 2) 
        {
            base_fare = SUPER_DELUXE_RATE * days;
        } 
        else
         {
            base_fare = SUITE_RATE * days;
        }

        // Calculate additional services cost
        additional_services = 0;
        if (breakfast == 'Y' || breakfast == 'y')
         {
            additional_services += BREAKFAST_COST * days;
        }
        if (wifi == 'Y' || wifi == 'y')
         {
            additional_services += WIFI_COST * days;
        }
        if (gym == 'Y' || gym == 'y')
         {
            additional_services += GYM_COST * days;
        }

        subtotal = base_fare + additional_services;

        // Apply discount if applicable
        if (subtotal > 10000) 
        {
            discount = subtotal * 0.10;
        } 
        else 
        {
            discount = 0;
        }
        //GST 12% ADDED    
         net_bill = subtotal - discount;
        gst = net_bill * 0.12; //gst added after discount
        final_bill = net_bill + gst;

        // Update summary
        rooms_booked++;
        total_revenue=final_bill;   
        if (i == 1)
         {
            highest_bill = final_bill;
            lowest_bill = final_bill ;
        } 
        else {
            if (final_bill > highest_bill) 
            {
                highest_bill = final_bill;
            }
            if (final_bill < lowest_bill) 
            {
                lowest_bill =final_bill;
            }
        }

        
        printf("Base Fare: %d\n", base_fare);
        printf("Additional Services: %d\n", additional_services);
        printf("Subtotal: %.0f\n", subtotal);
        printf("Discount 10 percent: %f\n", discount);
        printf("GST 12 percent: %f\n", gst);
        printf("Final Bill: %f\n", final_bill);
    }

    //  hotel summary
    printf("HOTEL SUMMARY \n");
    printf("Total Rooms Booked: %d\n", rooms_booked);
    printf("Total Revenue: %d\n", total_revenue);
    printf("Highest Bill: %d\n", highest_bill);
    printf("Lowest Bill: %d\n", lowest_bill);
    
    return 0;
}
