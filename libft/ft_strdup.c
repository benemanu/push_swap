/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:14:22 by bhielsch          #+#    #+#             */
/*   Updated: 2022/10/05 11:14:50 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		len;
	char	*dest;

	len = ft_strlen(src) + 1;
	dest = (char *)malloc(len);
	if (!dest)
		return (NULL);
	ft_memcpy(dest, src, len);
	return (dest);
}

// int main()
// {
//     char str[] = "coucou";
//     printf("Mine: %s\n", ft_strdup(str));
//     printf("OG:   %s\n", strdup(str));
// }
