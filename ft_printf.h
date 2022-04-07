/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:48:50 by anhebert          #+#    #+#             */
/*   Updated: 2022/04/04 10:38:09 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <ctype.h> 
# include <stdarg.h>
# include <limits.h>

int		ft_check_var(va_list args, const char var);
int		ft_printf(const char *str, ...);
int		ft_printnbr(int nbr);
int		ft_printunbr(unsigned int nbr);
int		ft_printchar(char c);
int		ft_printstr(char *str);
int		ft_hexalen(unsigned long nb);
int		ft_printhex(unsigned int nbr, const char var);
int		ft_printpnt(va_list args);
char	*ft_itoa(int n);
void	ft_printhexptr(unsigned long nb, int *len, char *base);

#endif
