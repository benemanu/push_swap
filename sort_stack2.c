/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:37:44 by bhielsch          #+#    #+#             */
/*   Updated: 2022/12/15 12:37:46 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	handle_stack_2(t_stack *stack)
{
	sa(stack, 0);
}

void	handle_stack_4(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack->ca == 4)
	{
		get_smallest_number(stack);
		pb(stack);
		i++;
	}
	handle_stack_3(stack);
	while (i > 0)
	{
		pa(stack);
		i--;
	}
}

void	handle_stack_100(t_stack *stack)
{
	int	max_bits;
	int	j;
	int	i;

	simplify_stack(stack);
	i = -1;
	max_bits = 0;
	while ((stack->ca >> max_bits) != 0)
		++max_bits;
	while (++i < max_bits)
	{
		j = 0;
		while (j < stack->ca)
		{
			if (((stack->stcka[0] >> i) & 1) == 0)
				pb(stack);
			else
			{
				ra(stack, 0, 0);
				j++;
			}
		}
		while (stack->cb != 0)
			pa(stack);
	}
}

int	get_pos(t_stack *stack, int index)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < stack->ca)
	{
		if (stack->stcka[index] > stack->stcka[i])
			j++;
		i++;
	}
	return (j);
}

void	simplify_stack(t_stack *stack)
{
	int	i;
	int	*arr;

	arr = malloc(4 * stack->aon);
	i = 0;
	while (i < stack->ca)
	{
		arr[i] = get_pos(stack, i);
		i++;
	}
	i = 0;
	while (i < stack->ca)
	{
		stack->stcka[i] = arr[i];
		i++;
	}
	free(arr);
}
