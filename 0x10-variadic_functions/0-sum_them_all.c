#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns sum of all arguments
 * @n: int, number of undefined arguments
 * @...: parameters in the function
 * Return: 0 If n == 0
 * otherwise - sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)

{
va_list ap;
unsigned int i, sum = 0;

va_start(ap, n);
if (n != 0)
	for (i = 0; i < n; sum += va_arg(ap, unsigned int), i++)
	;
va_end(ap);

return (sum);
}
