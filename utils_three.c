/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_three.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:38:39 by bhielsch          #+#    #+#             */
/*   Updated: 2022/12/15 12:38:42 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	numlen(int num)
{
	int	i;

	i = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

void	rrr(t_stack *stack)
{
	rra(stack, 1);
	rrb(stack, 1);
	stack->m_c++;
}

int	words_count(const char *str, char c)
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

char	*word_cpy(const char *str, int start, int end)
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

void	ft_split1(char const *s, char c, t_stack *stack)
{
	int	i;
	int	j;
	int	k;

	stack->word = malloc(sizeof(char *) * (words_count(s, c) + 1));
	if (!stack->word || !s)
		error_mess("Something didnt work", stack);
	i = 0;
	j = 0;
	k = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && k < 0)
			k = i;
		else if ((s[i] == c || i == ft_strlen(s)) && k >= 0)
		{
			stack->word[j] = word_cpy(s, k, i);
			j++;
			k = -1;
		}
		i++;
	}
	stack->word[j] = 0;
}
