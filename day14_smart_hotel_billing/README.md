# Day15_SRM_Smart_Hotel_Billing_GaganAdithyaRam
**Student Name:** Gagan Adithya Ram  
**Roll No:** AP25110090156  
**Challenge:** Day 15 - SRM Smart Hotel Billing System

## Description
This C program simulates a hotel billing system that calculates total charges based on room type, number of days, and optional services like Breakfast, Wi-Fi, and Gym Access.  
It applies discounts for high-value bookings, adds GST, and summarizes total revenue, highest, and lowest bills.

---

## Build Commands
### Windows (MinGW):
```bash
mkdir build
gcc -std=c11 -Wall -Wextra -O2 main.c -o build/program.exe
```

### Linux/macOS:
```bash
mkdir -p build
gcc -std=c11 -Wall -Wextra -O2 main.c -o build/program
```

---

## Run Commands
### Windows:
```bash
build\program.exe
```

### Linux/macOS:
```bash
./build/program
```

---

## Example Output
```
Smart Hotel Room Booking System
Enter total number of customers: 2

--- Customer 1 ---
Enter name: Aditya
Enter room type (1-Deluxe, 2-Super Deluxe, 3-Suite): 2
Enter number of days: 3
Breakfast (Y/N): Y
Wi-Fi (Y/N): Y
Gym Access (Y/N): N

Base Fare: 12000
Additional Services: 1200
Subtotal: 13200
Discount 10 percent: 1320.000000
GST 12 percent: 1425.600000
Final Bill: 13305.600000

--- HOTEL SUMMARY ---
Total Rooms Booked: 2
Total Revenue: 25000
Highest Bill: 13305
Lowest Bill: 11700
```

---

