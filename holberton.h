#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdarg.h>

/* _printf */
int _printf(const char *format, ...);

/* print_alpha */
int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);

/* print_percent */
int print_percent(va_list l, flags_t *f);

#endif
