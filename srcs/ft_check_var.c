/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_var.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:27:00 by anhebert          #+#    #+#             */
/*   Updated: 2022/04/07 12:53:07 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_var(va_list args, const char var)
{
	int	len;

	len = 0;
	if (var == 'c')
		len = ft_printchar(va_arg(args, int));
	else if (var == 's')
		len = ft_printstr(va_arg(args, char *));
	else if (var == 'p')
		len = ft_printpnt(args);
	else if (var == 'd' || var == 'i')
		len = ft_printnbr(va_arg(args, int));
	else if (var == 'u')
		len = ft_printunbr(va_arg(args, unsigned int));
	else if (var == 'x' || var == 'X')
		len = ft_printhex(va_arg(args, unsigned int), var);
	else if (var == '%')
		len = ft_printchar('%');
	return (len);
}
