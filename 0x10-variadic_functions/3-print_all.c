#include "variadic_functions.h"
/**
 *print_all -prints anything.
 *@format: list of types of arguments passed to the function
 */
void print_all(const char* const format, ...)
{
	va_list ap;
	char c_val;
	int i_val;
	float f_val;
	char *s_val;
	int i = 0;

	va_start(ap, format);
	if (format)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					c_val = va_arg(ap, int);
					printf("%c", c_val);
					break;
				case 'i':
					i_val = va_arg(ap, int);
					printf("%d", i_val);
					break;
				case 'f':
					f_val = va_arg(ap, double);
					printf("%f", f_val);
					break;
				case 's':
					s_val = va_arg(ap, char*);
					if (s_val == NULL)
					{
						printf("(nil)");
					}
					else
					{
						printf("%s", s_val);
					}
					break;
			}
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}
