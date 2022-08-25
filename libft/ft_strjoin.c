/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 20:48:52 by taybakan          #+#    #+#             */
/*   Updated: 2022/07/02 21:14:41 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

/*size_t	ft_strlen(char const *s)
{
	size_t	i;
	
	i = 0;
	while ((char)s[i] != '\0')
		i++;
	return (i);
}
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	a;
	size_t	c;
	char	*s;

	i = ((ft_strlen(s1)) + (ft_strlen(s2)) + 1);
	s = (char *)malloc(sizeof(char) * i);
	a = 0;
	c = 0;
	while ((char)s1[a] != '\0')
	{
		s[c] = s1[a];
		c++;
		a++;
	}
	a = 0;
	while ((char)s2[a] != '\0')
	{
		s[c] = s2[a];
		c++;
		a++;
	}
	s[c] = '\0';
	return (s);
}

/*int	main()
{
	char const	*s1;
	char const	*s2;

	s1 = "cemal";
	s2 = "aybakan";
	printf("%s\n", (ft_strjoin(s1, s2)));
	return (1);
}
*/
