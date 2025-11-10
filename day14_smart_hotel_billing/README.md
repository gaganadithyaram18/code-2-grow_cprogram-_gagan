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
========= Smart Hotel Room Booking System =========
Enter total number of customers: 2
--- Customer 1 ---
Enter name: Arjun
Enter room type (1-Deluxe, 2-Super Deluxe, 3-Suite): 2
Enter number of days: 3
Breakfast (Y/N): Y
Wi-Fi (Y/N): N
Gym Access (Y/N): Y
Base Fare: ₹12000
Additional Services: ₹1500
Subtotal: ₹13500
Discount (10%): ₹1350
GST (12%): ₹1458
Final Bill: ₹13508
--- Customer 2 ---
Enter name: Sneha
Enter room type (1-Deluxe, 2-Super Deluxe, 3-Suite): 1
Enter number of days: 2
Breakfast (Y/N): N
Wi-Fi (Y/N): Y
Gym Access (Y/N): N
Base Fare: ₹5000
Additional Services: ₹200
Subtotal: ₹5200
Discount: ₹0
GST (12%): ₹624
Final Bill: ₹5824
========= Hotel Summary =========
Total Rooms Booked: 2
Total Revenue: ₹19332
Highest Bill: ₹13508
Lowest Bill: ₹5824
=================================
---

