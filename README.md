# ft_printf

## Introduction
The `ft_printf` project involves recoding the `printf()` function from the standard C library. This function is used to display formatted strings. You will learn to use variadic functions in C, which is a valuable skill for any C programmer.

## Features
The `ft_printf()` function handles the following conversions:
- `%c`: Prints a single character.
- `%s`: Prints a string.
- `%p`: Prints a pointer in hexadecimal format.
- `%d`: Prints a decimal (base 10) number.
- `%i`: Prints an integer in base 10.
- `%u`: Prints an unsigned decimal (base 10) number.
- `%x`: Prints a number in hexadecimal (base 16) lowercase format.
- `%X`: Prints a number in hexadecimal (base 16) uppercase format.
- `%%`: Prints a percent sign.

Your `ft_printf()` can also handle the flags `'-0.'` and the minimum field width for all the conversions mentioned above.

## Usage
To use `ft_printf()` in one of your project, follow these steps:

1. Clone the git repository:
   ```sh
   git clone https://github.com/Arnaud212/Ft_printf.git
   cd Ft_printf
   ```
2. Compile the library using the provided Makefile:
   ```sh
   make
   ```

3. Include the `libftprintf.a` library in your C project. Make sure to also include the `ft_printf.h` header file:
   ```c
   #include "ft_printf.h"

   int main() {
       ft_printf("Hello, %s!\n", "world");
       return 0;
   }
   ```

4. Compile your project with the `libftprintf.a` library:
   ```sh
   gcc -o my_program my_program.c libftprintf.a
   ```
