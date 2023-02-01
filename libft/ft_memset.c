/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:12:02 by bhielsch          #+#    #+#             */
/*   Updated: 2022/10/07 16:21:51 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest;

	i = 0;
	dest = (unsigned char *)s;
	while (i < n)
	{
		dest[i] = c;
		i++;
	}
	return (s);
}

// int main()
// {
//     int n = 42;
//     unsigned char str[42];
//     int c = 'L';
// 	ft_memset(str, c, n);
//     printf("Mine: %s", str); 
//     //printf("OG:   %p\n", memset(str, c, n)); 
// }
