
# C Internship Submission - Basic Calculator & To-Do List

## Overview

This repository contains two console-based C programs:

1. **Basic Calculator**: A simple calculator program that supports basic arithmetic operations such as addition, subtraction, multiplication, and division.
2. **To-Do List**: A task management program that allows users to add, edit, and mark tasks as complete.

Both programs are designed to showcase fundamental programming concepts such as control structures, arrays, functions, and user input handling in C.


---

## Features

### Basic Calculator:
- Perform basic arithmetic operations: addition, subtraction, multiplication, and division.
- Continuously prompt the user for input until the exit option is selected.
- Error handling for division by zero.

### To-Do List:
- Add, edit, and mark tasks as complete.
- Display all tasks with completion status.
- Maximum of 10 tasks can be managed at a time.

---

## Usage

### Basic Calculator

Once you run the calculator program, it will display a menu with options for performing basic arithmetic operations. Here's how it works:

1. Choose an operation (1 for Addition, 2 for Subtraction, 3 for Multiplication, 4 for Division, 5 to Exit).
2. Enter two numbers when prompted.
3. The result of the chosen operation will be displayed.
4. The program will continue until the "Exit" option (5) is selected.

#### Sample Output:

```
Basic Calculator
================
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit

Enter your choice(1-5): 1
Enter two numbers: 5 3
Result: 5.00+3.00=8.00
```

### To-Do List

The To-Do List program allows users to manage a list of tasks. The available options are:

1. Add a new task.
2. Edit an existing task.
3. Mark a task as complete.
4. View all tasks and their status.
5. Exit the program.

Tasks are stored in an array, and a maximum of 10 tasks can be added. Tasks can be marked as complete, and users can edit tasks at any time.

#### Sample Output:

```
To-Do List Menu:
1. Add Task
2. Edit Task
3. Mark Task as Complete
4. View Tasks
5. Exit
Enter your choice (1-5): 1
Enter task: Buy groceries
Task added successfully.

To-Do List Menu:
1. Add Task
2. Edit Task
3. Mark Task as Complete
4. View Tasks
5. Exit
Enter your choice (4-5): 4
Task List:
1. Buy groceries [Pending]
```

---

## Code Structure

### `calculator.c`

- The program begins by displaying a menu for basic arithmetic operations.
- A `while` loop ensures that the calculator runs continuously until the user opts to exit.
- A `switch` statement is used to handle different operations.
- Input validation is done to check for valid choices and division by zero.

### `To-Do_List.c`

- The program uses a `struct` to represent tasks, storing the task description and completion status.
- Functions are used to show tasks, add tasks, edit tasks, and mark tasks as complete.
- The program uses a simple array of `Task` structs to store up to 10 tasks.
- The `switch` statement controls the menu-based interface for task management.

---
