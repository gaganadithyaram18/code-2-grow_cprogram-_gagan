# Day18 - SRM Inventory Management System  
### Student: Gagan Adithya Ram  
### Register No: AP25110090156  
### Code2Grow Challenge – Day 18  

## Project Overview
This C program is an Inventory Management System that allows the user to manage up to 10 products.

## Features
- Add product details  
- Display all products  
- Compute total inventory value  
- Show highest & lowest value product  
- Search product by ID  
- Exit safely  


## Compile Instructions
### Windows:
gcc main.c -o build/program.exe

### Linux/macOS:
gcc main.c -o build/program

## Run Instructions
### Windows:
build\program.exe

### Linux/macOS:
./build/program

## output
==== INVENTORY MANAGEMENT MENU =====
1. Enter Product Details
2. Display All Products
3. Show Inventory Value, Highest & Lowest Value Product
4. Search Product by ID
5. Exit
Enter your choice: 1

Enter Product ID: 5540

Enter Product Name: nike

Enter Quantity: 1

Enter Price: 10000
Product added successfully!

===== INVENTORY MANAGEMENT MENU =====
1. Enter Product Details
2. Display All Products
3. Show Inventory Value, Highest & Lowest Value Product
4. Search Product by ID
5. Exit
Enter your choice: 2

----- PRODUCT LIST -----

Product 1:
ID: 5540
Name: nike
Quantity: 1
Price: 10000.00

===== INVENTORY MANAGEMENT MENU =====
1. Enter Product Details
2. Display All Products
3. Show Inventory Value, Highest & Lowest Value Product
4. Search Product by ID
5. Exit
Enter your choice: 5
Exiting program. Goodbye!
