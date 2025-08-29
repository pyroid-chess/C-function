# C-function
It an C library contain basic functions from scratch*

A simple C library that provides basic printing utilities and integer arithmetic functions.


---

Project Structure

.
├── function.h       # Header file (declarations)
├── function.c       # Library source file (definitions)
├── main.c           # Example usage program
└── README.md        # This file


---

Features

Printing:

print(const char *s) → prints a string (no newline).

println(const char *s) → prints a string with newline.

print_int(int v) → prints an integer.


Math:

add(a, b) → addition

sub(a, b) → subtraction

mul(a, b) → multiplication

divi(a, b) → integer division (returns 0 if b == 0)




---

Build Instructions

1. Compile the library

gcc -c function.c -o function.o
ar rcs libfunction.a function.o

This creates a static library called libfunction.a.


---

2. Compile your program with the library

gcc main.c -L. -lfunction -o main

Here:

-L. tells GCC to look in the current directory for libraries.

-lfunction links against libfunction.a.



---

3. Run the program

./main

Example output:

Hello from library!
2 + 3 = 5


---

Example Code (main.c)

#include "function.h"

int main() {
    println("Hello from library!");
    print("2 + 3 = ");
    print_int(add(2, 3));
    println("");
    return 0;
}


---
