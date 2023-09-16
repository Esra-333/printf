#include "main.h"
/**
 * init_params - clears struct fields and reset buf
 * @params: the parameters struct
 * @ap: the argument pointer
 * return void
 */
void init_params(params_t, *params, va_list ap)
{
	params->unsign = 0;
	params->plus_flag = 0;
	params->space_flag = 0;
	params->hastag_flag = 0;
	params->zero_flag = 0;
	params->minus_flag = 0;
	params->precision = UNIT_MAX;
	params->h_modifier = 0;
	params->l_modifier = 0;
	void (ap);
}
