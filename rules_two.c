/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_two.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:37:33 by bhielsch          #+#    #+#             */
/*   Updated: 2022/12/15 12:37:35 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stack, int ind, int x)
{
	int	temp;
	int	i;

	i = 0;
	temp = stack->stcka[0];
	while (i < stack->ca)
	{
		stack->stcka[i] = stack->stcka[i + 1];
		i++;
	}
	if (ind == 1)
		stack->stcka[stack->ca] = temp;
	else
		stack->stcka[stack->ca - 1] = temp;
	if (x == 1)
		ft_printf("rr\n");
	else
	{
		if (x != 2)
		{
			stack->m_c++;
			ft_printf("ra\n");
		}
	}
}

void	rb(t_stack *stack, int ind, int x)
{
	int	temp;
	int	i;

	i = 0;
	temp = stack->stckb[0];
	while (i < stack->cb)
	{
		stack->stckb[i] = stack->stckb[i + 1];
		i++;
	}
	if (ind == 1)
		stack->stckb[stack->cb] = temp;
	else
		stack->stckb[stack->cb - 1] = temp;
	if (x == 1)
		ft_printf("rr\n");
	else
	{
		if (x != 2)
		{
			stack->m_c++;
			ft_printf("rb\n");
		}
	}
}

void	rr(t_stack *stack)
{
	ra(stack, 0, 1);
	rb(stack, 0, 1);
	stack->m_c++;
}

void	rra(t_stack *stack, int ind)
{
	int	temp;
	int	i;

	i = 0;
	temp = stack->stcka[stack->ca - 1];
	while (i < stack->ca - 1)
	{
		stack->stcka[stack->ca - (1 + i)] = stack->stcka[stack->ca - (2 + i)];
		i++;
	}
	stack->stcka[0] = temp;
	if (ind == 1)
		ft_printf("rrr\n");
	else
	{
		ft_printf("rra\n");
		stack->m_c++;
	}
}

void	rrb(t_stack *stack, int ind)
{
	int	temp;
	int	i;

	i = 0;
	temp = stack->stckb[stack->cb - 1];
	while (i < stack->cb - 1)
	{
		stack->stckb[stack->cb - (1 + i)] = stack->stckb[stack->ca - (2 + i)];
		i++;
	}
	stack->stckb[0] = temp;
	if (ind == 1)
		ft_printf("rrr\n");
	else
	{
		ft_printf("rrb\n");
		stack->m_c++;
	}
}
