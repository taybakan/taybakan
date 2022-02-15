/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:54:59 by taybakan          #+#    #+#             */
/*   Updated: 2022/02/15 15:15:43 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	f;
	int	l;

	f = -1;
	while (++f <= 98)
	{
		f = l;
		while (++l <= 99)
		{
			ft_putchar(f / 10 + '0');
			ft_putchar(f % 10 + '0');
			write (1, " ", 1);
			ft_putchar(l / 10 + '0');
			ft_putchar(l % 10 + '0');
			if (f != 98 || l != 99)
				write(1, ", ", 2);
		}
	}
}
