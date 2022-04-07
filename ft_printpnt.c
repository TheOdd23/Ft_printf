/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpnt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:34:46 by anhebert          #+#    #+#             */
/*   Updated: 2022/04/07 13:23:17 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhexptr(unsigned long nb, int *len, char *base)
{
	if (nb >= 16)
		ft_printhexptr((nb / 16), len, base);
	write(1, &base[nb % 16], 1);
	*len += 1;
}

int	ft_printpnt(va_list pnt)
{
	int				len;
	unsigned long	adr;

	adr = (unsigned long)va_arg(pnt, void *);
	len = 2;
	write(1, "0x", 2);
	ft_printhexptr(adr, &len, "0123456789abcdef");
	return (len);
}
