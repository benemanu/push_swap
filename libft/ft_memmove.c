/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:33:26 by bhielsch          #+#    #+#             */
/*   Updated: 2022/10/05 12:29:09 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp;
	unsigned char	*dst;
	unsigned char	*source;
	size_t			i;
	int				x;

	if (!dest && !src)
		return (NULL);
	i = 0;
	x = 0;
	dst = dest;
	source = (unsigned char *)src;
	temp = (unsigned char *)malloc(n);
	if (!temp)
		return (dest);
	while (i < n)
	{
		temp[i] = source[i];
		i++;
	}
	while (n--)
		*dst++ = temp[x++];
	free(temp);
	return (dest);
}

// int main()
// {
// 	int n = 7;
// 	char dest[n];
// 	char cest[n];
// 	char src[] = "HelloWorld";
// 	ft_memmove(dest, src, n);
// 	puts(dest);
// 	memmove(cest, src, n);
// 	puts(cest);
// }
