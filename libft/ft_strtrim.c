/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:42:11 by taybakan          #+#    #+#             */
/*   Updated: 2022/08/25 19:36:34 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>
//#include <stdlib.h>

struct s_ind
{
	size_t	i1;
	size_t	i2;
	size_t	i3;
	size_t	i4;
};

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;

	struct	s_ind index = {strlen(s1) -1, 0, 0, 0};
	while (set[index.i4] != '\0')
	{
		if (s1[index.i1] == set[index.i4])
		{
			index.i1--;
			index.i4 = 0;
		}
		else if (s1[index.i2] == set[index.i4])
		{
			index.i2++;
			index.i4 = 0;
		}
		else
			index.i4++;
	}
	trim = (char *)malloc(sizeof(char) * (index.i1 - index.i2 + 1));
	while (index.i1 >= index.i2)
	{
		trim[index.i3] = s1[index.i2];
		index.i3++;
		index.i2++;
	}
	trim[index.i3] = '\0';
	return (trim);
}
/*int main()
{
	char *a = "aaccccabHello Worldbbaabbbaaa";
	char *b = "abc";
	printf("%s\n", ft_strtrim(a, b));
	return 0;
}*/
