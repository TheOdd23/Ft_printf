/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:26:50 by anhebert          #+#    #+#             */
/*   Updated: 2022/04/07 10:59:53 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexalen(unsigned long nb)
{
	int	len;

	len = 1;
	while (nb >= 16)
	{
		nb /= 16;
		len++;
	}
	return (len);
}

int	ft_printhex(unsigned int nbr, const char var)
{
	unsigned long	nb;
	char			*hexabase;
	int				len;
	int				i;

	hexabase = "0123456789abcdef";
	len = 0;
	i = 0;
	nb = nbr;
	if (var == 'X')
		hexabase = "0123456789ABCDEF";
	if (nb >= 16)
	{
		ft_printhex((nb / 16), var);
		ft_printhex((nb % 16), var);
	}
	else
		write(1, &hexabase[nb], 1);
	return (ft_hexalen(nbr));
}
