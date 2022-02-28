/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:17:18 by taybakan          #+#    #+#             */
/*   Updated: 2022/02/28 09:29:19 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*#include <stdio.h>*/

int	ft_char_is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		a;

	i = 1;
	if (str[0] >= 'a' && str[i] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		a = ft_char_is_alpha(str[i - 1]);
		if ((a == 0) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if ((a == 1) && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	return (str);
}
/*int main()
{
	char c[] = "saLut, coMMent tu vAs ? 42mOts Quarante-deux; Cinquante+et+un";
	printf("%s\n",ft_strcapitalize(c));
	return 0;
}*/
