/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:40:43 by mkorucu           #+#    #+#             */
/*   Updated: 2022/02/12 16:30:13 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	digits;
	int	number[10];
	int	i;

	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	while (0 < nb)
	{
		number[digits++] = nb % 10;
		nb /= 10;
	}
	while (0 < digits)
	{
		ft_putchar(number[--digits] + 48);
	}
}
