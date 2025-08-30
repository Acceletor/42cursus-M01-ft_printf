# ft_printf

A reimplementation of the standard C `printf` function, created as part of the 42 curriculum.  
The goal of this project is to reproduce the behavior of `printf`, handle formatted output, and gain a deeper understanding of variadic functions in C.

---

## Supported Conversions
My version of `ft_printf` supports the following conversions:

- `%c` → Character  
- `%s` → String  
- `%p` → Pointer (printed in hexadecimal with `0x` prefix)  
- `%d` / `%i` → Signed decimal integer  
- `%u` → Unsigned decimal integer  
- `%x` → Hexadecimal (lowercase)  
- `%X` → Hexadecimal (uppercase)  
- `%%` → Prints a literal `%`


 ## Project Description
Unlike the original `printf`, this project is restricted to using only low-level functions like `write()`.  
The implementation required building:
- A parser to handle format specifiers
- A set of conversion functions for each type
- Utilities for base conversions and string manipulation
- Variadic argument handling with `<stdarg.h>`

This project helped me practice:
- Working with **variadic functions**  
- Implementing **custom format handling**  
- Writing **modular, reusable code**  
