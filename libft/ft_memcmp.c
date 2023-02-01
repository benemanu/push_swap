/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:59:37 by bhielsch          #+#    #+#             */
/*   Updated: 2022/10/07 16:30:24 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i != n)
	{
		if (str1[i] == str2[i])
			i++;
		else if (str1[i] > str2[i])
			return (1);
		else
			return (-1);
	}
	return (0);
}

// int main()
// {
//     char str1[] = "Hella WorLd";
//     char str2[] = "Hella WorLd";
//     int n = 100;
//     printf("Mine %d \n", ft_memcmp(str1, str2, n));
//     printf("OG   %d \n", memcmp(str1, str2, n));
// }
