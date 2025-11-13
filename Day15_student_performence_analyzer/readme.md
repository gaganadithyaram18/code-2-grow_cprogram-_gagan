# Day15_Student_Performance_Analyzer_GaganAdithya
**Student Name:** Gagan Adithya  
**Roll No:** AP25110090156  
**Challenge:** Day 15 -  Student Performance Analyzer

## Description
This C program analyzes student performance by calculating grades based on marks entered for up to 10 students.  
It computes the average, highest, lowest marks, and provides a distribution of grades from A+ to Fail.

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
========= Student Performance Analyzer =========
Enter total number of students: 5
Enter marks for each student:
Student 1: 95
Student 2: 82
Student 3: 76
Student 4: 63
Student 5: 45

========= Result Summary =========
Average Marks: 72.20
Highest Marks: 95
Lowest Marks: 45
Total Passed Students: 4
Total Failed Students: 1
Grade Distribution:
A+ : 1
A  : 1
B  : 1
C  : 1
D  : 0
Fail: 1
```

---


☑ Submitted before deadline
