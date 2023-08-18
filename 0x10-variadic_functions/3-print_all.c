#include "variadic_functions.h"

/**
 * format_char - gsgsd
 * @separator: fasfsd
 * @ap: afadgsd
 * Return: fsfsf
 */

void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * format_int - asgsd
 * @separator: fasfs
 * @ap: fafsaf
 * Return: fasfsa
 */

void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * format_float - asggsg
 * @separator: fasfsa
 * @ap: fafsa
 * Return: gsgds
 */

void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, float));
}

/**
 * format_string - gsgdsg
 * @separator: fasf
 * @ap: gagdsgds
 * Return: gsdgsdg
 */

void format_string(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
		case 1:
			str = "(nil)";
	printf("%s%s", separator, str);
}

/**
 * print_all - gagsdgds
 * @format: gsgdsgsd
 * @...: fsgfsd
 * Return: fsfsdsdg
 */

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list ap;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
