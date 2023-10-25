# Simple Number List Manager

The **Simple Number List Manager** is a C++ console application that allows users to perform basic operations on a list of integers. Users can add numbers to the list, display the list, calculate the mean, find the smallest and largest numbers in the list, and search for a specific number within the list. The application provides a user-friendly menu system for easy navigation.

## Features

### 1. Display Numbers (Option P)
- This option displays the current list of numbers. If the list is empty, it informs the user.

### 2. Add a Number (Option A)
- Users can input an integer, and the application adds it to the list. It confirms the addition of the number.

### 3. Calculate Mean (Option M)
- This option calculates and displays the mean (average) of the numbers in the list. If the list is empty, it informs the user that the mean cannot be calculated.

### 4. Display Smallest Number (Option S)
- It displays the smallest number in the list. If the list is empty, it informs the user that it can't determine the smallest number.

### 5. Display Largest Number (Option L)
- This option displays the largest number in the list. If the list is empty, it informs the user that it can't determine the largest number.

### 6. Find a Number (Option F)
- Users can search for a specific number within the list. The application informs the user whether the number was found in the list or not.

### 7. Quit (Option Q)
- This option allows the user to exit the application, displaying a "Good Bye" message.

### 8. Unknown Selection
- If the user enters an invalid option, the application responds with an "Unknown Selection - try again" message.

## How to Use

1. Run the application in a C++ development environment or compile and execute it from the command line.
2. The program will display a menu of options.
3. Enter the corresponding letter for the operation you want to perform (e.g., 'A' to add a number).
4. Follow the prompts and instructions provided by the application.

## Code Structure

- The program is structured into functions for better modularity and readability.
- It uses a `vector<int>` to store the list of numbers.
- Each menu option is handled by a specific function, such as `handle_display`, `handle_add`, `handle_mean`, etc.
- Additional helper functions like `calculate_mean`, `get_smallest`, `get_largest`, and `find` are used to perform specific tasks.
- The main function uses a `do-while` loop to repeatedly display the menu and execute the selected option until the user chooses to quit.

## Happy Coding

