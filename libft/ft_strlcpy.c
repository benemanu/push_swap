/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:16:41 by bhielsch          #+#    #+#             */
/*   Updated: 2022/10/07 16:20:34 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h> 
#include "libft.h"

int	ft_strlcpy(char *dest, const char *src, int n)
{
	int	i;

	i = 0;
	if (n != 0)
	{
		while (src[i] && i < (n -1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

// int main()
// {
//     int n = 10;
//     char dest[10] = "AAAAAAAAAA"; 
//     char src[] = "coucou";
//     ft_strlcpy(dest, src, n);
//     puts(dest);
//     //printf("%ld", strlcpy(dest, src, n));
// }
