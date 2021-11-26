/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalaoui- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 21:53:17 by oalaoui-          #+#    #+#             */
/*   Updated: 2021/11/25 21:53:26 by oalaoui-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putnbr(int nb, int *cp)
{
	long long int	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar('-', cp);
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10, cp);
		ft_putchar((nbr % 10) + '0', cp);
	}
	else
		ft_putchar(nbr + '0', cp);
}
