# Day13_SmartBusFareCalculator
**Student Name:** Gagan Adithya  
**Roll No:** AP25110090156  
**Challenge:** Day 13 - SRM Smart Bus Fare Calculator  

## Description
This program calculates smart bus fares based on distance, age, and time of travel.  
It applies discounts for children and senior citizens and surcharges for peak hours.

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

## Sample Output
```
========= SRM Smart Bus Fare Calculator =========
Enter number of passengers: 3

--- Passenger 1 ---
Enter name: Arun
Enter age: 10
Enter distance (in km): 5
Enter travel time (24-hour format): 9
Passenger: Arun | Base Fare: 50.000000 | Child Discount Applied  Peak Hour Surcharge Applied  Final Fare: 30.000000

--- Passenger 2 ---
Enter name: Riya
Enter age: 65
Enter distance (in km): 8
Enter travel time (24-hour format): 12
Passenger: Riya | Base Fare: 80.000000 | Senior Citizen Discount Applied  Final Fare: 56.000000

--- Passenger 3 ---
Enter name: Varun
Enter age: 25
Enter distance (in km): 6
Enter travel time (24-hour format): 18
Passenger: Varun | Base Fare: 60.000000  Peak Hour Surcharge Applied  Final Fare: 72.000000

DAILY SUMMARY
Total Passengers: 3
Total Revenue Collected: 158.000000
Highest Fare: 72.000000
Lowest Fare: 30.000000
```

