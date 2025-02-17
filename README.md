# ft_printf

## Description
`ft_printf` is a custom implementation of the standard C `printf` function. It provides formatted output conversion and supports various format specifiers. This project was created as part of my learning journey in C programming to gain a deeper understanding of variadic functions, buffer management, and formatted output processing.

## Features
- Handles format specifiers: `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, `%p` and `%%`
- Supports variable argument lists using `stdarg.h`
- Efficient output handling
- Custom formatting logic without using the standard `printf` function

## Compilation
To compile `ft_printf`, use the following command:
```sh
cc -Wall -Wextra -Werror -c ft_printf.c
ar rcs libftprintf.a ft_printf.o
```
Or link it in your project:
```sh
cc main.c libftprintf.a -o my_program
```

## Usage
Include the header file in your source code and call `ft_printf`:
```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s! Your score is %d.\n", "User", 100);
    return 0;
}
```

## Project Structure
- `ft_printf.h` – Header file containing function prototypes and macros
- `ft_printf.c` – Main implementation of `ft_printf`
- `utils.c` – Utility functions for formatting and conversion
- `Makefile` – Compilation script for building the library

## Limitations
- Does not support floating-point formatting (`%f`, `%e`, `%g`)
- Limited error handling for incorrect format specifiers

## Author
Written by Huyuan Ai during the 42 Berlin Curriculum

