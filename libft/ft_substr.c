/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:16:58 by bhielsch          #+#    #+#             */
/*   Updated: 2022/11/16 17:27:31 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, int len)
{
	char	*substr;
	char	*str;
	int		j;
	int		i;

	str = (char *)s;
	i = 0;
	if ((int)start > ft_strlen(s))
		substr = (char *)malloc(1);
	else if ((int)start + len > ft_strlen(s) && (int)start <= ft_strlen(s))
		substr = (char *)malloc(ft_strlen((char *)s) - start + 1);
	else
		substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	j = 0;
	while (str[i])
	{	
		if (i >= (int)start && j < len)
			substr[j++] = str[i];
		i++;
	}
	substr[j] = '\0';
	return (substr);
}

// int	main()
// {
// 	char	str[] = "1";
// 	unsigned int		start = 42;
// 	size_t			len = 42000000;
// 	printf("%s", ft_substr(str, start, len));
// 	return (0);
// }
