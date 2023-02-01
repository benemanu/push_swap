/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:37:16 by bhielsch          #+#    #+#             */
/*   Updated: 2022/12/15 12:37:18 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# ifndef INT_MAX
#  define INT_MAX 2147483647
# endif

# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_stack
{
	int		*stcka;
	int		*stckb;
	int		aon;
	int		ca;
	int		cb;
	int		m_c;
	int		nblen;
	int		argc;
	char	**word;
	int		bol;
}			t_stack;

void		error_mess(char *str, t_stack *stack);
int			count_numbers(char *str);
void		get_stack_morearg(t_stack *stack, char *str, int pos);
void		get_stack_twoarg(t_stack *stack, char *str);
void		set_var(t_stack *stack, int argc, int count);
void		sort_stack(t_stack *stack);
void		move_stack_down(t_stack *stack, char c);
int			count_saon(t_stack *stack, char c);
void		move_stack_up(t_stack *stack, char c);
void		jax_stacks(t_stack *stack);
void		sa(t_stack *stack, int ind);
void		sb(t_stack *stack, int ind);
void		ss(t_stack *stack);
void		pa(t_stack *stack);
void		pb(t_stack *stack);
void		ra(t_stack *stack, int ind, int x);
void		rb(t_stack *stack, int ind, int x);
void		rr(t_stack *stack);
void		rra(t_stack *stack, int ind);
void		rrb(t_stack *stack, int ind);
void		rrr(t_stack *stack);
void		handle_stack_2(t_stack *stack);
void		handle_stack_3(t_stack *stack);
void		handle_stack_4(t_stack *stack);
void		handle_stack_5(t_stack *stack);
void		handle_stack_100(t_stack *stack);
int			get_smallest_index(t_stack *stack);
void		get_smallest_number(t_stack *stack);
int			check_if_sorted(t_stack *stack);
int			count_length(int nb);
void		get_most_length(t_stack *stack);
int			get_pos(t_stack *stack, int index);
void		simplify_stack(t_stack *stack);
int			is_equal(t_stack *stack, char *str, int index);
int			numlen(int num);
void		ft_split1(char const *s, char c, t_stack *stack);
char		*word_cpy(const char *str, int start, int end);
int			words_count(const char *str, char c);
int			check_if_nb(char *str);
int			check_if_dup(t_stack *stack);

#endif
