/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 11:37:05 by taybakan          #+#    #+#             */
/*   Updated: 2022/07/03 11:26:45 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s;
	size_t	d;

	d = 0;
	s = 0;
	while (dst[d] && (d < dstsize))
		d++;
	while (src[s] && d + s + 1 < dstsize)
	{
		dst[s + d] = src[s];
		s++;
	}
	if (d < dstsize)
		dst[d + s] = '\0';
	return (d + ft_strlen(src));
}
