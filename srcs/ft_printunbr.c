/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:26:33 by anhebert          #+#    #+#             */
/*   Updated: 2022/04/07 11:00:19 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunbr(unsigned int nbr)
{
	unsigned int	nb;
	int				len;

	len = 1;
	nb = nbr;
	while (nb >= 10)
	{
		nb /= 10;
		len++;
	}
	nb = nbr;
	if (nb > 9)
	{
		ft_printunbr(nb / 10);
		ft_printunbr(nb % 10);
	}
	else
		ft_printchar(nb + 48);
	return (len);
}
