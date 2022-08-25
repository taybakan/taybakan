/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:29:53 by taybakan          #+#    #+#             */
/*   Updated: 2022/08/25 19:38:10 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	a;
	size_t	d;

	a = 0;
	i = 0;
	d = 0;
	while (dst[i] != '\0')
	{
		temp[i] = dst[i];
		i++;
		d++;
	}
	while (src[a] != '\0')
	{
		if (i <= (dstsize -1))
		{
			temp[i] = src[a];
			i++;
		}
		a++;
	}
	temp[i] = '\0';
	printf("%s\n", temp);
	printf("%zu\n", (d + a));
	return (d + a);
}
/* int	main(void)
{
	char *a;
	const char *b;
	size_t i;

	a = "cemal";
	b = "aybakan";
	i = 10;
	ft_strlcat(a, b, i);
	return(1);
}
