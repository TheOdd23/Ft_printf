/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:26:55 by anhebert          #+#    #+#             */
/*   Updated: 2022/04/07 10:59:59 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int nbr)
{
	int		len;
	char	*num;

	num = ft_itoa(nbr);
	len = ft_printstr(num);
	free (num);
	return (len);
}
