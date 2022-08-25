/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 20:13:56 by taybakan          #+#    #+#             */
/*   Updated: 2022/07/02 20:48:13 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;
	size_t	c;

	i = 0;
	while (s[i] != '\0' && s[i] != (char)start)
		i++;
	if (s[i] == (char)start)
	{
		sub = (char *)malloc(sizeof(char) * len);
		c = 0;
		while (s[i] != '\0' && c < len)
		{
			sub[c] = s[i];
			c++;
			i++;
		}
		sub[c] = '\0';
		return (sub);
	}
	return (NULL);
}
/*int	main()
{
	char const		*s;
	unsigned int	start;
	size_t			len;

	s = "cemalaybakan";
	start = 97;
	len = 5;
	printf("%s\n", (ft_substr(s, start, len)));
	return (1);
}
*/
