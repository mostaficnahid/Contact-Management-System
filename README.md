Contact Management System (C Language)

A console-based application for managing personal and professional contacts, developed entirely in the C programming language. This project serves as a capstone to demonstrate proficiency in fundamental programming principles, including data structures, file I/O, and memory management.

Table of Contents

Project Overview

Key Features

Technologies & Concepts

System Requirements

How to Compile and Run

Application Usage

File Structure

Future Enhancements

Author

Project Overview

This Contact Management System provides a simple, efficient, and menu-driven command-line interface (CLI) for users to perform essential CRUD (Create, Read, Update, Delete) operations on contact records. The system is built to be lightweight and portable, relying only on standard C libraries. All contact data is persistently stored in a binary file (contacts.dat), ensuring that information is preserved across different sessions. The project's primary goal is to showcase a practical implementation of C for building robust, data-centric console applications.

Key Features

Add New Contact: Users can create new contact entries by providing a name, phone number, and email address.

Display All Contacts: View a neatly formatted list of all contacts currently stored in the system.

Search for a Contact: Easily find a specific contact by searching for their name.

Update Contact Details: Modify the information (name, phone, email) of an existing contact.

Delete a Contact: Remove a contact record permanently from the system.

Persistent Storage: Contact information is saved to a local file, so the data is not lost when the program is closed.

Technologies & Concepts

Programming Language: C (Standard: C99)

Compiler: GCC (GNU Compiler Collection) is recommended.

Core C Concepts Demonstrated:

File I/O: Using fopen, fread, fwrite, fseek, and fclose for data persistence.

Data Structures: Using struct to model the contact data.

Pointers: Extensive use for memory manipulation and passing data efficiently.

Dynamic Memory Allocation: Use of malloc and free for managing memory.

Standard Libraries: stdio.h, stdlib.h, string.h.

System Requirements

To compile and run this project, you need a C compiler installed on your system.

Linux: GCC is usually pre-installed. If not, install it via your package manager (e.g., sudo apt install gcc).

macOS: Install the Xcode Command Line Tools by running xcode-select --install in your terminal.

Windows: Install a C compiler like MinGW or use the compiler included with an IDE like Visual Studio or Code::Blocks.

How to Compile and Run

Get the Code:
Clone this repository or download the source code files to your local machine.

Navigate to the Directory:
Open a terminal or command prompt and navigate to the project's root folder.

cd /path/to/Contact-Management-System


Compile the Program:
Use gcc to compile the source code into an executable file.

gcc main.c -o contacts


(If your main file is named something else, replace main.c accordingly.)

Run the Application:
Execute the compiled program to start the system.

On Linux/macOS:

./contacts


On Windows:

contacts.exe


Application Usage

Upon running the application, you will be greeted with a clear, numbered menu.

************************************
* CONTACT MANAGEMENT SYSTEM     *
************************************
| 1. Add a New Contact             |
| 2. List All Contacts             |
| 3. Search for a Contact          |
| 4. Update a Contact              |
| 5. Delete a Contact              |
| 0. Exit Application              |
------------------------------------
Enter your choice:


To use the system, enter the number corresponding to your desired action and press Enter.

The application will then guide you with on-screen prompts for any required information.

File Structure

The project is organized with the following simple structure:

.
├── main.c              # The primary C source code for the application.
├── contacts.dat        # The binary data file where contacts are stored (created automatically on first run).
└── README.md           # This documentation file.


Future Enhancements

This project provides a solid foundation that can be extended with more advanced features, such as:

Input Validation: Implement stricter rules for inputs like email format and phone number length.

Modular Code: Break down the code into header (.h) and source (.c) files for better organization.

Sorting Functionality: Add the ability to sort the contact list alphabetically by name.

Group Contacts: Introduce a 'group' field (e.g., "Family", "Work") and allow filtering by group.

Author

Your Name: Mostafic Yellahy Nahid

GitHub: [[@your-github-username](https://github.com/your-github-username)](https://github.com/mostaficnahid)

LinkedIn: https://www.linkedin.com/in/mostafic-yellahy-nahid-46a0202b5/
