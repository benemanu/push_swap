/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_one.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:37:28 by bhielsch          #+#    #+#             */
/*   Updated: 2022/12/15 12:37:29 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack, int ind)
{
	int	temp;

	temp = 0;
	if (stack->ca > 1)
	{
		temp = stack->stcka[0];
		stack->stcka[0] = stack->stcka[1];
		stack->stcka[1] = temp;
	}
	if (ind == 1)
		ft_printf("ss\n");
	else
	{
		ft_printf("sa\n");
		stack->m_c++;
	}
}

void	sb(t_stack *stack, int ind)
{
	int	temp;

	temp = 0;
	if (stack->cb > 1)
	{
		temp = stack->stckb[0];
		stack->stckb[0] = stack->stckb[1];
		stack->stckb[1] = temp;
	}
	if (ind == 1)
		ft_printf("ss\n");
	else
	{
		ft_printf("sb\n");
		stack->m_c++;
	}
}

void	ss(t_stack *stack)
{
	sa(stack, 1);
	sb(stack, 1);
	stack->m_c++;
}

void	pa(t_stack *stack)
{
	if (stack->cb > 0)
	{
		stack->ca = stack->ca + 1;
		move_stack_down(stack, 'a');
		stack->stcka[0] = stack->stckb[0];
		move_stack_up(stack, 'b');
	}
	ft_printf("pa\n");
	stack->m_c++;
}

void	pb(t_stack *stack)
{
	if (stack->ca > 0)
	{
		stack->cb = stack->cb + 1;
		move_stack_down(stack, 'b');
		stack->stckb[0] = stack->stcka[0];
		move_stack_up(stack, 'a');
	}
	ft_printf("pb\n");
	stack->m_c++;
}
