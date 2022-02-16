/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:22:58 by taybakan          #+#    #+#             */
/*   Updated: 2022/02/16 10:51:41 by taybakan         ###   ########.fr       */
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

	digits = 0;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
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

/*int	main()
{
	ft_putnbr(42);
	return (0);
}*/
