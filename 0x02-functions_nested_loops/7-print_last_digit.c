#include "main.h"
/**
 *print_last_digit - function that prints the last digit of number.
 *@n: input letrer
 *@print_last_digit: return value of print_last_digit
 *Retrun:Always success
 */
int print_last_digit(int n)
{
int last_digit = n % 10;
if (last_digit < 0)
last_digit *= -1;
_putchar(last_digit + '0');
return (last_digit);
}
