*This project has been created as part of the 42 curriculum by ahmelamr*

# ft_printf

## Description

The **ft_printf** project is part of the 42 curriculum. Its goal is to recreate the behavior of the standard C `printf()` function by implementing a custom version called `ft_printf()`.

The function takes a format string followed by a variable number of arguments. It processes the format string, identifies conversion specifiers, retrieves the corresponding arguments, and prints their values to standard output.

The mandatory implementation supports the following conversions:

| Specifier | Description |
|---|---|
| `%c` | Prints a character |
| `%s` | Prints a string |
| `%p` | Prints a pointer address in hexadecimal |
| `%d` `%i` | Prints a signed decimal integer |
| `%u` | Prints an unsigned decimal integer |
| `%x` | Prints a hexadecimal number in lowercase |
| `%X` | Prints a hexadecimal number in uppercase |
| `%%` | Prints a percent sign |

Through this project, I practiced important C concepts, particularly variadic functions, argument handling, recursion, and formatted output.

## Instructions

### Compilation

The project uses a Makefile to compile the source files and create a static library named `libftprintf.a`.

Clone the repository and enter the project directory:

```bash
git clone <repository-url>
cd printf
```

Build the library:

```bash
make
```

Other available Makefile commands:

| Command | Description |
|---|---|
| `make` | Compiles the source files and creates the library |
| `make clean` | Removes object files |
| `make fclean` | Removes object files and the library |
| `make re` | Rebuilds the library from scratch |

### Using the library

Include the project header in your C source file:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! Number: %d\n", "42", 1337);
    return (0);
}
```

Compile your program and link it against the library:

```bash
cc main.c libftprintf.a
```

Run the executable:

```bash
./a.out
```

## Algorithm and Technical Choices

### Format string processing

The main function, `ft_printf()`, iterates through the format string one character at a time.

- Ordinary characters are printed directly using `write()`.
- When a `%` character is encountered, the following character is checked to identify the requested conversion.
- The corresponding argument is retrieved using `va_arg()`.
- A dedicated helper function handles the conversion.
- The function accumulates the number of characters written and returns that count.

### Variadic arguments

The implementation uses the `stdarg.h` library to handle a variable number of arguments.

- `va_start()` initializes access to the arguments.
- `va_arg()` retrieves each argument with its expected type.
- `va_end()` finishes the argument processing.

### Number conversion

Dedicated helper functions handle different number representations:

- `ft_putnbr()` handles signed decimal integers.
- `ft_putunbr()` handles unsigned decimal integers.
- `ft_puthex()` uses recursion to print the most significant hexadecimal digits first, followed by the remaining digits.

The hexadecimal conversion repeatedly divides the number by 16 and processes the remainder to produce the corresponding digit.

### Pointer conversion

`ft_putptr()` handles pointer arguments by converting their addresses into hexadecimal representation.

### Data Structures

The mandatory implementation does not require complex data structures. It uses primitive C types, a `va_list` to access variadic arguments, and character sequences containing hexadecimal digits.

## Resources

The following resources were useful for understanding the concepts involved in this project:

- [C standard library — Variadic functions (cppreference)](https://en.cppreference.com/w/c/variadic)
- [stdarg(3) — Linux manual](https://man7.org/linux/man-pages/man3/stdarg.3.html)
- [Variadic Functions in C — GeeksforGeeks](https://www.geeksforgeeks.org/c/variadic-functions-in-c/)
- [CodeVault — Variadic Functions in C](https://www.youtube.com/watch?v=oDC208zvsdg)
- [Clang AST Dump](https://clang.llvm.org/docs/IntroductionToTheClangAST.html)

  ```bash
  echo '#include <stdarg.h>
  va_list args;' | clang -Xclang -ast-dump -fsyntax-only -x c -
  ```

- **Inspect GCC's `va_list` implementation (assembly + debug information)**

  ```bash
  gcc -S -g /tmp/inspect_va.c -o /tmp/inspect_va.s
  grep -n -E 'gp_offset|fp_offset|overflow_arg_area|reg_save_area|__va_list_tag|size args' /tmp/inspect_va.s
  ```
```

### AI Usage

AI tools were used as learning and review assistance throughout this project.

They were used for the following tasks:

- **Learning C concepts:** Clarifying variadic functions, `va_list`, `va_start()`, `va_arg()`, `va_end()`, pointer handling, and integer conversions.
- **Documentation:** Reviewing and improving the README structure, explanations, and Markdown formatting.

AI was used to explain concepts, provide feedback, and support the debugging and learning process. The implementation, technical decisions, testing, and code corrections were carried out through my own work and understanding.
