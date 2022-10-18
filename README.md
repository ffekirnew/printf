## _printf
This is our own version of the printf function found in unix systems. To read more about the printf function, read up on this: <a href="https://www.academia.edu/10297206/Secrets_of_printf_">The Secrets of Printf</a>.

### Files Description
#### <im>_printf.c</im>
1. _printf - the main funcction that accepts a formatted string and a variable number of arguments to print onto the screen

#### <im>_printf_base_convertor_functions.c</im>
1. _putchar_binary - prints binary numbers onto the screen
2. _putchar_octal - prints octal numbers onto the screen
3. _putchar_hexadecimal_lower - prints hexadecimal numbers onto the screen, using lower case alphabets
4. _putchar_hexadecimal_upper - prints hexadecimal numbers onto the screen, using upper case alphabets
5. base_convertor - converts unsigned integers to the base specified

#### <im>_printf_char_functions.c</im>
1. _putchar_percent - prints the percent sign onto the screen
2. _putchar_str - prints a string onto the screen
3. _putchar_char - prints a charachter to the screen

#### <im>_printf_int_functions.c</im>
1. _putchar_int - prints an integer (signed) onto the screen
2. _putchar_unsigned_int - prints an unsigned integer onto the screen
3. _putchar_int_recursive - prints an integer recursively onto the screen
4. _putchar_unsigned_int_recursive - prints an unsigned integer recursively onto the screen

#### <im>_printf_specifier_selector.c</im>
1. _printf_selector - selects the right function to use to handle the conversion specifiers passed inside the string

### Usage
