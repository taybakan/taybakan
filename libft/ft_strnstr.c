/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 05:25:32 by taybakan          #+#    #+#             */
/*   Updated: 2022/08/25 19:39:19 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	n = ft_strlen(needle);
	i = 0;
	while (haystack && i <= len)
	{
		if (needle == haystack(i + sizeof(needle)))
			return (i);
		i++;
	}
	return (0);
}	
