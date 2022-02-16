/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:37:04 by taybakan          #+#    #+#             */
/*   Updated: 2022/02/16 11:42:40 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);
{
	int	nbr1;
	int	nbr2;

	nbr1 = *a;
	nbr2 = *b;
	*a = nbr1 / nbr2;
	*b = nbr1 % nbr2;
}
