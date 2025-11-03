# Day10_RestaurantBillingFeedback
**Student Name:** T. Gagan Adithya Ram  
**Roll No:** AP25110090156  
**Challenge:** Day 10 - Restaurant Billing Feedback System  

## Description
This C program simulates a restaurant billing system where the user can input the number of customers, items purchased, and quantities.  
The program calculates the total, applies discounts (10%% for bills over ₹500), and displays a summary of all transactions.  

## Build Commands
### Linux/macOS:
```
mkdir -p build
gcc -std=c11 -Wall -Wextra -O2 main.c -o build/program
```

### Windows (MinGW):
```
mkdir build
gcc -std=c11 -Wall -Wextra -O2 main.c -o build/program.exe
```

## Run Commands
### Linux/macOS:
```
./build/program
```

### Windows:
```
build\program.exe
```

## Output Example
```
Enter total number of customers: 2

--- Customer 1 ---
Enter number of items: 2
Code  Item Name     Price (₹)
1     Sandwich      80
2     Burger        120
3     Pizza Slice   150
4     Coffee        60
5     Juice         50
Enter item code: 1
Enter quantity: 2
Sandwich x 2 = 160
Enter item code: 3
Enter quantity: 1
Pizza Slice x 1 = 150
Total: 310.00
Final Bill: 310.00

--- Customer 2 ---
Enter number of items: 3
Enter item code: 2
Enter quantity: 2
Burger x 2 = 240
Enter item code: 4
Enter quantity: 2
Coffee x 2 = 120
Enter item code: 5
Enter quantity: 3
Juice x 3 = 150
Total: 510.00
Discount (10%): 51.00
Final Bill: 459.00

Canteen Summary
Total Customers Served: 2
Total Revenue: 769.00
```
