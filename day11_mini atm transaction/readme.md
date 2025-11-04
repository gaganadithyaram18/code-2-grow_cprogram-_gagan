# Day11_MiniBankTransaction
**Student Name:** T. Gagan Adithya Ram  
**Roll No:** AP25110090156  
**Challenge:** Day 11 - Mini Bank Transaction System  

## Description
This C program simulates a simple mini bank transaction system that allows users to check balance, deposit, withdraw, and exit.  
It limits the maximum number of transactions to 5 and shows a transaction summary after exiting.

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
Welcome to mini bank transaction
1. check balance
2. deposit
3. withdraw
4. Exit
Enter your choice: 2
Enter amount to deposit: 5000
amount deposited successfully!
final balance after deposited: 15000.00
1. check balance
2. deposit
3. withdraw
4. Exit
Enter your choice: 3
Enter amount to withdraw: 2000
Withdrawal successful!
remaining balance is: 13000.00
transaction summery
total transaction2
final balance13000.00
```
