# Day17_SRM_Cafe_Order_Management_GaganAdithyaRam
**Student Name:** Gagan Adithya Ram  
**Roll No:** AP25110090156  
**Challenge:** Day 17 - SRM Cafe Order Management System

## Description
This C program simulates a café order management system.  
It displays a fixed menu, allows multiple customers to place orders, calculates individual bills, and generates a summary of total revenue, total items sold, and most/least ordered items.

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
========= Café Order Management System =========
Enter total number of customers (max 10): 2

========= MENU =========
Item No.    Item Name   Price
1           Coffee      50
2           Tea         30
3           Sandwich    80
4           Burger      120
5           Pastry      60
========================

--- Customer 1 ---
Enter number of items: 2
Enter item number and quantity: 1 2
Enter item number and quantity: 4 1
Total Bill for Customer 1: 220

--- Customer 2 ---
Enter number of items: 1
Enter item number and quantity: 3 3
Total Bill for Customer 2: 240

========= Cafe Summary =========
Total Revenue: 460
Total Items Sold: 6
Most Ordered Item: Sandwich
Least Ordered Item: Tea
```

---


