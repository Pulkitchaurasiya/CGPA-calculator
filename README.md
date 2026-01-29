# 🎓 GPA & CGPA Calculator (C++)

A simple console-based **GPA and CGPA Calculator** written in **C++**.  
This program takes course grades and credit hours as input, calculates the **semester GPA**, and displays the **final CGPA**.


## 📌 Features

- Take input for number of courses
- Accept **grade points** and **credit hours** for each course
- Calculate:
  - Total credits
  - Total grade points
  - GPA
  - CGPA
- Display individual course details in a clean table
- Beginner-friendly and well-structured code


## 🛠️ Technologies Used

- Language: **C++**
- Compiler: **GCC / MinGW / Any standard C++ compiler**
- Interface: **Console (Terminal)**


## 📥 Input Format

1. Number of courses  
2. For each course:
   - Grade Point (e.g. 10, 9, 8)
   - Credit Hours


## GPA Formula

GPA = (Σ Grade Point × Credit Hours) / Σ Credit Hours


## 📤 Output

- Course-wise grades and credits
- Total credits
- Total grade points
- GPA
- CGPA
  

## 1️⃣ Compile the program

g++ gpa_cgpa.cpp -o gpa
