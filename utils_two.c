/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_two.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:38:30 by bhielsch          #+#    #+#             */
/*   Updated: 2022/12/15 12:38:34 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_numbers(char *str)
{
	int	counter;
	int	i;

	i = 0;
	counter = 0;
	if (!str)
		return (0);
	while (i < ft_strlen(str))
	{
		if (str[i] == '-')
			i++;
		while (str[i] >= '0' && str[i] <= '9')
			i++;
		counter++;
		i++;
	}
	return (counter);
}

void	jax_stacks(t_stack *stack)
{
	int	i;

	i = 0;
	ft_printf("Stack A:\n\n");
	if (stack->ca == 0)
		ft_printf("EMPTY\n\n");
	while (i < stack->ca)
	{
		ft_printf("%d\n", stack->stcka[i]);
		i++;
	}
	ft_printf("\nStack B:\n\n");
	i = 0;
	while (i < stack->cb)
	{
		ft_printf("%d\n", stack->stckb[i]);
		i++;
	}
	if (stack->cb == 0)
		ft_printf("EMPTY\n\n");
}

void	get_most_length(t_stack *stack)
{
	int	i;

	stack->nblen = 0;
	i = 0;
	while (i < stack->ca)
	{
		if (count_length(stack->stcka[i]) > stack->nblen)
			stack->nblen = count_length(stack->stcka[i]);
		i++;
	}
}

int	count_length(int nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}
