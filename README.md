# C-function

A simple C library that provides basic printing utilities and integer arithmetic functions, implemented from scratch.

---

## Project Structure

```
.
├── function.h       # Header file (declarations)
├── function.c       # Library source file (definitions)
├── main.c           # Example usage program
└── README.md        # This file
```

---

## Features

### Printing

- `print(const char *s)`  
  Prints a string (no newline).

- `println(const char *s)`  
  Prints a string with a newline.

- `print_int(int v)`  
  Prints an integer value.

### Math

- `add(a, b)`  
  Addition

- `sub(a, b)`  
  Subtraction

- `mul(a, b)`  
  Multiplication

- `divi(a, b)`  
  Integer division (returns 0 if `b == 0`)

---

## Build Instructions

### 1. Compile the Library

```sh
gcc -c function.c -o function.o
ar rcs libfunction.a function.o
```

This creates a static library called `libfunction.a`.

### 2. Compile Your Program with the Library

```sh
gcc main.c -L. -lfunction -o main
```

- `-L.` tells GCC to look in the current directory for libraries.
- `-lfunction` links against `libfunction.a`.

### 3. Run the Program

```sh
./main
```

Example output:

```
Hello from library!
2 + 3 = 5
```

---

## Example Code (`main.c`)

```c
#include "function.h"

int main() {
    println("Hello from library!");
    print("2 + 3 = ");
    print_int(add(2, 3));
    println("");
    return 0;
}
```

---
