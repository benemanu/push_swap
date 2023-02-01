/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:13:22 by bhielsch          #+#    #+#             */
/*   Updated: 2022/10/13 17:44:38 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	size_t			i;

	i = -1;
	if (!s)
		return (0);
	while (s[++i])
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
	if (s[i] == (unsigned char)c)
		return ((char *)s + i);
	return (0);
}

// int main()
// {
//     char s[] = "tripouille";
//     printf("Mine: %s\n", ft_strchr(s, 't' + 256));
//     printf("OG:   %s\n", strchr(s, 't' + 256));
// }
