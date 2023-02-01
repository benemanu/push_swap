/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:16:55 by bhielsch          #+#    #+#             */
/*   Updated: 2022/11/16 17:26:39 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	words_count(const char *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			while (str[i] && str[i] != c)
				i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

static char	*word_cpy(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc(end - start + 1);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		k;

	str = malloc(sizeof(char *) * (words_count(s, c) + 1));
	if (!str || !s)
		return (0);
	i = 0;
	j = 0;
	k = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && k < 0)
			k = i;
		else if ((s[i] == c || i == ft_strlen(s)) && k >= 0)
		{
			str[j++] = word_cpy(s, k, i);
			k = -1;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}

// int	main(void)
// {
//  	char *s = "split  ||this|for|me|||||!|";
//  	char **tab = ft_split(s, '|');
//   	for (int i = 0; tab[i]; i++)
//          {
//                  if (tab[i] != ((void*)0))
//                          printf("Fail");
//          	free(tab[i]);
//          }
//          printf("Sucess");
// }
