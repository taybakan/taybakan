/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:34:51 by taybakan          #+#    #+#             */
/*   Updated: 2022/02/16 11:36:23 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
