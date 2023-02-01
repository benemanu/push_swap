/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:37:48 by bhielsch          #+#    #+#             */
/*   Updated: 2022/12/15 13:56:39 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_stack *stack)
{
	if (check_if_dup(stack) == -1)
		error_mess("Error\n", stack);
	if (check_if_sorted(stack) == -1)
	{
		if (stack->aon == 2)
			handle_stack_2(stack);
		else if (stack->aon == 3)
			handle_stack_3(stack);
		else if (stack->aon == 4)
			handle_stack_4(stack);
		else if (stack->aon == 5)
			handle_stack_5(stack);
		else if (stack->aon >= 6)
			handle_stack_100(stack);
	}
}

void	handle_stack_3(t_stack *stack)
{
	if (check_if_sorted(stack) == -1)
	{
		if (stack->stcka[0] > stack->stcka[1])
		{
			if (stack->stcka[1] > stack->stcka[2])
			{
				sa(stack, 0);
				rra(stack, 0);
			}
			else if (stack->stcka[2] < stack->stcka[0])
				ra(stack, 0, 0);
			else
				sa(stack, 0);
		}
		else if (stack->stcka[1] > stack->stcka[0])
		{
			if (stack->stcka[0] > stack->stcka[2])
				rra(stack, 0);
			else
			{
				rra(stack, 0);
				sa(stack, 0);
			}
		}
	}
}

void	handle_stack_5(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack->ca == 5)
	{
		get_smallest_number(stack);
		pb(stack);
		i++;
	}
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

int	get_smallest_index(t_stack *stack)
{
	int	i;
	int	temp;
	int	j;

	j = 0;
	i = 1;
	temp = stack->stcka[0];
	while (i < stack->ca - 1)
	{
		if (stack->stcka[i] < temp)
		{
			temp = stack->stcka[i];
			j = i;
		}
		i++;
	}
	if (stack->stcka[stack->ca - 1] < temp)
		j = stack->ca;
	return (j);
}

void	get_smallest_number(t_stack *stack)
{
	int	temp;

	temp = get_smallest_index(stack);
	while (temp != 0)
	{
		if (temp <= 2)
			ra(stack, 0, 0);
		else
			rra(stack, 0);
		temp = get_smallest_index(stack);
	}
}
