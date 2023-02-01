/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:30:52 by bhielsch          #+#    #+#             */
/*   Updated: 2022/10/13 17:46:17 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static size_t	ft_intlen(int n);

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	nlen;
	unsigned int	j;

	j = n;
	nlen = ft_intlen(j);
	if (n < 0)
	{
		j = j * -1;
		nlen++;
	}
	str = (char *)malloc(sizeof(char) * (nlen + 1));
	if (!str)
		return (NULL);
	*(str + nlen) = 0;
	while (nlen--)
	{
		*(str + nlen) = j % 10 + '0';
		j = j / 10;
	}
	if (n < 0)
		str[0] = '-';
	str[ft_strlen(str)] = '\0';
	return (str);
}

static size_t	ft_intlen(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

// int main()
// {
//     int n = -2147483647;
//     printf("%s", ft_itoa(n));
// }
