/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:19:08 by bhielsch          #+#    #+#             */
/*   Updated: 2022/11/16 17:20:48 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, int n)
{
	char	*bigstr;
	int		little_len;
	int		i;
	int		j;

	i = 0;
	if (n == 0 && !big)
		return (ft_strdup(""));
	bigstr = (char *)big;
	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	while (bigstr[i] && i != n)
	{			
		j = 0;
		while (bigstr[i + j] && bigstr[i + j] == little[j] && i + j < n)
			j++;
		if (j == little_len)
			return ((char *)big + i);
		i++;
	}
	return (0);
}

// int main()
// {
//     const char little[] = "lorem";
//     int n = 35; 
//     printf("Mine: %s \n", ft_strnstr("Rawr rawr" , little, n));
// 	//printf("OG:   %s \n", strnstr(big, little, n));
// }
