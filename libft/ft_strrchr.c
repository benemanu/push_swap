/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:26:41 by bhielsch          #+#    #+#             */
/*   Updated: 2022/10/13 17:48:14 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char )c)
			return (&str[i]);
		i--;
	}
	if ((char)c == '\0')
		return (str);
	return (NULL);
}

// int main()
// {
//     char str[] = "abbbbbbbbb";
// 	//char str2[] = "the cake is a lie !\0I'm hidden lol\r\n";
// 	// char str3[] = "";

//     int c = 'a';
//     printf("Mine %s \n", ft_strrchr(str, c));
//     printf("OG %s", strrchr(str, c));
// }
