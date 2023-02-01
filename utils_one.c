/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_one.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:38:00 by bhielsch          #+#    #+#             */
/*   Updated: 2022/12/15 12:38:01 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_saon(t_stack *stack, char c)
{
	int	i;

	i = 0;
	if (c == 'a')
	{
		while (stack->stcka[i])
			i++;
	}
	else if (c == 'b')
	{
		while (stack->stckb[i])
			i++;
	}
	return (i);
}

void	move_stack_down(t_stack *stack, char c)
{
	int	i;

	i = 0;
	if (c == 'a')
	{
		i = stack->ca - 1;
		while (i > 0)
		{
			stack->stcka[i] = stack->stcka[i - 1];
			i--;
		}
	}
	else if (c == 'b')
	{
		i = stack->cb - 1;
		while (i > 0)
		{
			stack->stckb[i] = stack->stckb[i - 1];
			i--;
		}
	}
}

void	move_stack_up(t_stack *stack, char c)
{
	if (c == 'a')
	{
		stack->ca = stack->ca - 1;
		ra(stack, 1, 2);
	}
	else if (c == 'b')
	{
		stack->cb = stack->cb - 1;
		rb(stack, 1, 2);
	}
}

void	set_var(t_stack *stack, int argc, int count)
{
	if (argc == 2)
	{
		stack->aon = count;
		stack->ca = count;
		stack->stcka = malloc(4 * count);
		stack->stckb = malloc(4 * count);
	}
	else
	{
		stack->aon = argc - 1;
		stack->ca = argc - 1;
		stack->stcka = malloc(4 * (argc - 1));
		stack->stckb = malloc(4 * (argc - 1));
	}
	stack->cb = 0;
	stack->m_c = 0;
}

int	check_if_sorted(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->ca - 1)
	{
		if (stack->stcka[i] < stack->stcka[i + 1])
			i++;
		else
			return (-1);
	}
	return (0);
}
