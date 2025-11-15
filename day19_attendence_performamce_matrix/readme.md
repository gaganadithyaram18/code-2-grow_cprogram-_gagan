
# Day 19 -Attendance Performance Management System
### Student: **Gagan Adithya Ram**
### Register No: **AP25110090156**
### Code2Grow Challenge – Day 19  Attendance Performance Management 

---

## 📘 Project Overview // Approch 
This program manages **attendance and academic performance** for 5 students using 2 matrices:  
- **Attendance Matrix** (1 = Present, 0 = Absent)  
- **Marks Matrix** (0–100 per subject)  

It provides reports such as:  
Attendance Report  
 Performance Report  
 Grade Report  
 Display Matrices  

---

## 🛠 Features  

### 1️⃣ Display Attendance Matrix  
Shows 5×5 attendance values per student.

### 2️⃣ Display Marks Matrix  
Displays marks for all students.

### 3️⃣ Attendance Report  
- Total presents  
- Total absents  
- Highest & lowest attendance  

### 4️⃣ Performance Report  
- Total marks  
- Average marks  
- Topper  
- Lowest scorer  

### 5️⃣ Grade Report  
Based on average marks:  
| Average | Grade |
|---------|--------|
| 90–100 | A+ |
| 80–89 | A |
| 70–79 | B |
| 60–69 | C |
| 50–59 | D |
| <50 | FAIL |

### 6️⃣ Exit Program  

### BUILD COMMANDS

### **Windows (MinGW / GCC)**  
```
gcc main.c -o build/program.exe
```

### **Linux/macOS**  
```
gcc main.c -o build/program
```

---

## ▶️ Run Instructions  

### Windows  
```
build\program.exe
```

### Linux/macOS  
```
./build/program
```

---
## Output
1.Display Attendence matrix
2.Display marks matrix
3.Attendence Report
4. Performance Report
5. Grade Report
6. Exit
========================
Enter your choice: 1

Attendance Matrix:
ram:    1 0 1 1 1
adithya: 1 1 0 0 0
gagan:  1 1 1 1 1
rahul:  1 0 1 0 1
nayan:  1 1 1 1 1

========= MENU =========
1. Display Attendance Matrix
2. Display Marks Matrix
3. Attendance Report
4. Performance Report
5. Grade Report
6. Exit
========================
Enter your choice: 2

Marks Matrix:
ram:    88 99 75 45 65
adithya:88 95 74 86 85
gagan:  77 88 99 85 65
rahul:  45 88 99 100 87
nayan:  88 97 84 86 85

========= MENU =========
1. Display Attendance Matrix
2. Display Marks Matrix
3. Attendance Report
4. Performance Report
5. Grade Report
6. Exit
========================
Enter your choice: 3

===== Attendance Report =====
ram Present: 4, Absent: 1
adithya Present: 2, Absent: 3
gagan Present: 5, Absent: 0
rahul Present: 3, Absent: 2
nayan Present: 5, Absent: 0

Highest Attendance: gagan (5 days)
Lowest Attendance: adithya (2 days)

========= MENU =========
1. Display Attendance Matrix
2. Display Marks Matrix
3. Attendance Report
4. Performance Report
5. Grade Report
6. Exit
========================
Enter your choice: 4

===== Performance Report =====
ram Total: 372, Average: 74
adithya Total: 428, Average: 85
gagan Total: 414, Average: 82
rahul Total: 419, Average: 83
nayan Total: 440, Average: 88

Class Topper: nayan (440 marks)
Lowest Performer: ram (372 marks)

========= MENU =========
1. Display Attendance Matrix
2. Display Marks Matrix
3. Attendance Report
4. Performance Report
5. Grade Report
6. Exit
========================
Enter your choice: 5

===== Grade Report =====
ram Average: 74.400002, Grade: B
adithyaAverage: 85.599998, Grade: A
gaganAverage: 82.800003, Grade: A
rahulAverage: 83.800003, Grade: A
nayanAverage: 88.000000, Grade: A

========= MENU =========
1. Display Attendance Matrix
2. Display Marks Matrix
3. Attendance Report
4. Performance Report
5. Grade Report
6. Exit
========================
Enter your choice: 6
Exiting program ....
