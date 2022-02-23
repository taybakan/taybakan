/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:59:54 by taybakan          #+#    #+#             */
/*   Updated: 2022/02/22 21:59:26 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_non(char c)
{
	if (c >= 32 && c <= 126)
		return (0);
	else
		return (1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	a;

	i = 0;
	while (str[i] != '\0')
	{
		a = ft_non(str[i]);
		if (a == 1)
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[i] / 16]);
			ft_putchar("0123456789abcdef"[str[i] % 16]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
