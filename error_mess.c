/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_mess.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:36:43 by bhielsch          #+#    #+#             */
/*   Updated: 2022/12/15 12:36:44 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_mess(char *str, t_stack *stack)
{
	int	i;

	i = 0;
	ft_printf("%s", str);
	if (stack->argc == 2 && stack->aon > 1 && stack->bol != -1)
	{
		while (i < stack->aon)
			free(stack->word[i++]);
		free(stack->word);
	}
	else if (stack->bol == -1)
	{
		free(stack->stcka);
		free(stack->stckb);
		exit(0);
	}	
	free(stack->stcka);
	free(stack->stckb);
	exit(0);
}
