#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

#define OUTPUT_BUF_SIZE 1024
#define PUF_FLUSH -1
#define PARAMS_INT (0,0,0,0,0,0,0,0,0,0,)

#define CONVERT_LOWERCASE 1
#define CONVERT_UNSIGNED  2

/**
 * struct parameters - parameters struct
 * @unsign: flag if unsigned value
 * @ plus_flag: on if plus_flag specified 
 * @hashtag_flag:on is flag specified
 * @zero_flag:on is flag specified
 * @minus_flag:on is flag specified
 * @ width: field width specified
 * @ precision:field precision specified 
 * @ h_modifier:on if h_modifier is specified
 * @l_modifier:on if l_modifier  is  specified
 */
Typedef struct Parameters
{
	unsigned int unsign         :1;
	unsigned int plus_flag      :1;
	unsigned int space_flag     :1;
	unsigned int hashtag_flag   :1;
	unsigned int zero           :1;
	unsigned int minus          :1;
	unsigned int width          :1;
	unsigned int precision      :1;
	unsigned int h_modifier     :1;
	unsigned int l_modifier     :1;
} params_t
/**
 * struct specifier- struct token
 * @specifier: format token
 * @f: the function associated
 */
typedef struct specifier
{
	char *specifier;
	int (*f) (va_list, params_t *);
} specifier_t;

/*  _put.c modul */
int _puts(char *str);
int _putchar(int c);

/* printer function.c modul */
int print_char(va_list ap, params_t, *params);
int print_int(va_list ap, params_t, *params);
int print_string(va_list ap, params_t, *params);
int print_percent(va_list ap, params_t, *params);
int print_s(va_list ap, params_t, *params);
/* number.c modul */
char *convert(long int num, int base, int flags, params_t, params);
int print_unsigned(va_list ap, params_t, *params);
int print_address(va_list ap, params_t, *params);

/* specifier.c modul */
int (*get_specifier(char *s)) (va_list ap, params_t, *params);
int  get_print_func (Shar *s, va_list ap, params_t, *params);
int  get_flag (Shar *s, va_list ap, params_t, *params);
int  get_modifier (Shar *s, va_list ap, params_t, *params);
int  get_width (Shar *s, va_list ap, params_t, *params);

/* convert_number.c modul */
int print_hex(va_list ap, params_t, *params);
int print_HEX(va_list ap, params_t, *params);
int print_binary(va_list ap, params_t, *params);
int print_from_to(va_list ap, params_t, *params);
int print_rev(va_list ap, params_t, *params);
int print_rot13(va_list ap, params_t, *params);

/* print number.c modul */
int _isdigit(int c);
int _strlen(char *s);
int print_number(char *str, params_t, *params);
int print_number_right_shift(char *str, params_t, *params);
int print_number_left_shift(char *str, params_t, *params);
/* params.c modul */
void init_params (params_t, *params, va_list, ap);
/* string_field.c module */
char *get_precision(params_t, *params, va_list, ap);
/* _prinf.c */
int _printf(const char *format, ...);

#endif

