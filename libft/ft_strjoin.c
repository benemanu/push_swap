/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:29:04 by bhielsch          #+#    #+#             */
/*   Updated: 2022/11/16 17:19:22 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	strlen;
	size_t	i;
	size_t	j;

	i = ft_strlen((char *)s2);
	j = ft_strlen((char *)s1);
	if (!s2)
		return (NULL);
	strlen = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	str = (char *)malloc(strlen + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, (char *)s1, j);
	ft_memcpy(str + j, (char *)s2, i);
	*(str + strlen) = '\0';
	free ((char *)s1);
	return (str);
}

// int main()
// {
//     char s1[] = "World";
//     char s2[] = "Hello";
//     printf("%s", ft_strjoin(s1, s2));
// }
