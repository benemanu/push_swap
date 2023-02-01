/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:43:06 by bhielsch          #+#    #+#             */
/*   Updated: 2022/11/16 17:19:55 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_line(char *str)
{
	int		i;
	char	*strtr;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	strtr = malloc(sizeof(char) * (i + 2));
	if (!strtr)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		strtr[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		strtr[i] = str[i];
		i++;
	}
	strtr[i] = '\0';
	return (strtr);
}
