0x0D. C - Preprocessor
C
 By: Julien Barbier & Johan Euphrosine, Software Engineer at Google
 Weight: 1
 Project will start Jun 19, 2023 6:00 AM, must end by Jun 20, 2023 6:00 AM
 Checker will be released at Jun 19, 2023 12:00 PM
 An auto review will be launched at the deadline
Resources
Read or watch:

Understanding C program Compilation Process
Object-like Macros
Macro Arguments
Pre Processor Directives in C
The C Preprocessor
Standard Predefined Macros
include guard
Common Predefined Macros
Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What are macros and how to use them
What are the most common predefined macros
How to include guard your header files
Copyright - Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.
Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
Don’t forget to push your header file
All your header files should be include guarded
Tasks
0. Object-like Macro
mandatory
Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.
1. Pi
mandatory
Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.
2. File name
mandatory
Write a program that prints the name of the file it was compiled from, followed by a new line.

You are allowed to use the standard library
3. Function-like macro
mandatory
Write a function-like macro ABS(x) that computes the absolute value of a number x.
4. SUM
mandatory
Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.
