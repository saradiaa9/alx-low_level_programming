#include "function_pointers.h"
/**
 * print_name - prints a name using a function pointer
 * @name: the name to print
 * @f: a function pointer that takes a char pointer as an argument
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{

f(name);
}
