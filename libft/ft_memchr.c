/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 04:58:08 by taybakan          #+#    #+#             */
/*   Updated: 2022/08/31 14:21:12 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*d;
	char	ch;

	i = 0;
	d = (*(char )) * s;
	ch = (char)c;
	while (d && n >= 0 && d != ch)
	{
		d++;
		n--;
	}
	if (d == ch)
		return (d);
	return (0);
}
