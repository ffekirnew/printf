#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.%d, %x, %X, %u, %i\n", 1000, 1000, 1000, 1000, 1000, 1000);
    len2 = printf("Let's try to printf a simple sentence.%d, %x, %X, %u, %i\n", 1000, 1000, 1000, 1000, 1000, 1000);
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
	/* Task 2 */
	_printf("Binary: [%b]\n", 98);
	/* Task 5 */
	_printf("String: [%S]\n", "Best\nSchool");
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
	/* Task 13 */
	_printf("Reversed: [%r]\n", "Best School");
	/* Task 14 Nxnyrjbyq Onoh naq Sxearj Oeunah */
	_printf("Rot13'ed: [%R]\n", "Akalewold Babu and Fkrnew Brhanu");
	_printf("Rot13'ed: [%R]\n", "Nxnyrjbyq Onoh naq Sxearj Oeunah");
    return (0);
}
