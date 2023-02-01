/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:31:22 by bhielsch          #+#    #+#             */
/*   Updated: 2022/10/13 17:33:29 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb > 4294967295 || size > 4294967295)
		return (0);
	ptr = (void *)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}

// int main()
// {
//     int nmemb = 3;
//     int size = 4;
//     printf("Mine:  %p\n", ft_calloc(nmemb, size));
//     printf("OG:    %p\n", calloc(nmemb, size));
// }
