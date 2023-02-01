/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:40:02 by bhielsch          #+#    #+#             */
/*   Updated: 2022/10/14 14:53:18 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t			size;
	unsigned int	i;

	i = 0;
	size = ft_strlen((char *)s);
	str = (char *)malloc(size + 1);
	if (!str)
		return (0);
	while (i < size)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main()
// {
//     char str[] = "1234";
//     printf("%s", ft_strmapi(str, "1357"));
// }
