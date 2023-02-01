/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:36:51 by bhielsch          #+#    #+#             */
/*   Updated: 2022/12/15 12:36:54 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_stack_twoarg(t_stack *stack, char *str)
{
	int	i;

	if (count_numbers(str) < 2)
		error_mess("", stack);
	i = -1;
	ft_split1(str, ' ', stack);
	while (++i < count_numbers(str))
	{
		stack->stcka[i] = ft_atoi(stack->word[i]);
		if (is_equal(stack, stack->word[i], i) == -1)
			error_mess("Error\n", stack);
	}
}

void	get_stack_morearg(t_stack *stack, char *str, int pos)
{
	stack->stcka[pos] = ft_atoi(str);
	if (is_equal(stack, str, pos) == -1)
		error_mess("Error\n", stack);
}

int	is_equal(t_stack *stack, char *str, int index)
{
	char	*str1;
	int		i;

	i = 0;
	str1 = ft_itoa(stack->stcka[index]);
	while (str1[i])
	{
		if (str1[i] == str[i])
			i++;
		else
		{
			free(str1);
			return (-1);
		}
	}
	free(str1);
	return (0);
}
