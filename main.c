/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:37:07 by bhielsch          #+#    #+#             */
/*   Updated: 2022/12/15 12:37:10 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	st;
	int		i;

	i = 0;
	st.argc = argc;
	set_var(&st, argc, count_numbers(argv[1]));
	while (++i < argc)
	{
		st.bol = check_if_nb(argv[i]);
		if (check_if_nb(argv[i]) == -1)
			error_mess("Error\n", &st);
	}
	i = -1;
	if (argc < 2)
		error_mess("Error\n", &st);
	else if (argc == 2)
		get_stack_twoarg(&st, argv[1]);
	else if (argc > 2)
	{
		while (++i < argc - 1)
			get_stack_morearg(&st, argv[i + 1], i);
	}
	sort_stack(&st);
	error_mess("", &st);
}

int	check_if_nb(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == ' ')
			i++;
		else
			return (-1);
	}
	return (0);
}

int	check_if_dup(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->ca)
	{
		j = 0;
		while (j < stack->ca)
		{
			if (stack->stcka[j] == stack->stcka[i] && i != j)
				return (-1);
			else
				j++;
		}
		i++;
	}
	return (0);
}
