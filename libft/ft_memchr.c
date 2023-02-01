/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:54:37 by bhielsch          #+#    #+#             */
/*   Updated: 2022/10/14 16:46:14 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i != n)
	{
		if (str[i] == (unsigned char) c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	const char s[] = "/|\x12\xff\x09\x42\042\42|\\";
// 	int c = '\xde';
// 	int n = 10;
// 	printf("Mine %p \n", ft_memchr(s, c, n));
// 	printf("OG   %p \n", memchr(s, c, n));
// }
