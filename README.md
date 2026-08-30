# Student-Record-Management-System
A menu-driven **Student Record Management System** developed in C using a **Singly Linked List**. It supports adding, deleting, modifying, searching, sorting, displaying, saving, loading, and reversing student records with dynamic memory allocation and file handling.
# Student Record Management System

A menu-driven **Student Record Management System** developed in **C programming** using a **Singly Linked List**.

The project demonstrates dynamic memory allocation, linked-list operations, searching, sorting, file handling, modular programming, and memory management.

## Features

* Add a new student record
* Automatically assign a unique roll number
* Delete a record by:

  * Roll number
  * Student name
* Display all student records in tabular format
* Modify records by:

  * Roll number
  * Name
  * Percentage
* Sort records by:

  * Name
  * Percentage in descending order
* Reverse the linked list
* Delete all records
* Save records to `student.dat`
* Load previously saved records when the program starts
* Save and exit or exit without saving
* Input validation for roll number, name, and percentage
* Proper dynamic memory allocation and deallocation

## Technologies Used

* **Language:** C
* **Data Structure:** Singly Linked List
* **Memory Management:** `malloc()`, `free()`
* **File Handling:** C File I/O
* **Compiler:** GCC

## Student Structure

Each student record contains:

```c
struct student
{
    int rollno;
    char name[50];
    float percentage;
    struct student *next;
};
```

## Project Structure

```text
Student-Record-Management-System/
│
├── student.h
├── stud_main.c
├── stud_add.c
├── stud_del.c
├── stud_show.c
├── stud_mod.c
├── stud_save.c
└── README.md
```

### Module Description

| File          | Responsibility                                |
| ------------- | --------------------------------------------- |
| `student.h`   | Structure definitions and function prototypes |
| `stud_main.c` | Main function, menu and program flow          |
| `stud_add.c`  | Add student records                           |
| `stud_del.c`  | Delete student records                        |
| `stud_show.c` | Display student records                       |
| `stud_mod.c`  | Modify student records                        |
| `stud_save.c` | Save and load records                         |

## Main Menu

```text
******** STUDENT RECORD MENU ********

a/A : Add new record
d/D : Delete a record
s/S : Show the list
m/M : Modify a record
v/V : Save records
t/T : Sort the list
l/L : Delete all the records
r/R : Reverse the list
e/E : Exit

Enter your choice:
```

## Compilation

Compile all source files using GCC:

```bash
gcc stud_main.c stud_add.c stud_del.c stud_show.c stud_mod.c stud_save.c -o student
```

## Execution

Run the executable:

```bash
./student
```

The executable is named:

```text
student
```

## File Handling

Student records are stored in:

```text
student.dat
```

When the program starts, it attempts to load previously saved records from `student.dat`.

Records are saved when the user selects **Save Records** or **Save and Exit**.

## Memory Management

Each student node is dynamically allocated using `malloc()`.

When a record is deleted, its memory is released using `free()`.

Before the program terminates, all remaining dynamically allocated nodes are released to prevent memory leaks.

## Linked List Operations

### Add

A new node is dynamically allocated and inserted into the singly linked list. The smallest available positive roll number is assigned to the student.

### Delete

Records can be deleted using the roll number or name. If multiple students have the same name, their roll numbers are displayed so the required record can be selected.

### Modify

Student details can be searched using roll number, name, or percentage and then modified.

### Sort

The list can be sorted:

* Alphabetically by student name
* By percentage in descending order

### Reverse

The linked list is reversed by changing the `next` pointers without creating another set of nodes.

Example:

```text
Before:
1 → 2 → 3 → 4 → NULL

After:
4 → 3 → 2 → 1 → NULL
```

## Input Validation

The program validates:

* Roll number must be positive and unique
* Percentage must be between `0.00` and `100.00`
* Student name must not be empty
* Invalid menu choices
* Attempts to modify or delete non-existing records

## Example Output

```text
------------------------------------------------
Roll No.    Name                 Percentage
------------------------------------------------
1           Rahul                78.50
2           Priya                85.25
3           Arun                 91.00
------------------------------------------------
```

## Concepts Demonstrated

* Structures
* Pointers
* Singly Linked Lists
* Dynamic Memory Allocation
* Functions
* Modular Programming
* Searching
* Sorting
* File Handling
* Input Validation
* Memory Deallocation

## Project Objective

The objective of this project is to implement a practical student record management application while demonstrating fundamental C programming and data-structure concepts.

## Author

**Jeyaprakash V**

**Language:** C
