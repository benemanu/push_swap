/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:28:28 by bhielsch          #+#    #+#             */
/*   Updated: 2022/10/20 13:58:03 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_print_c(char c);
int	ft_print_p(void *ptr);
int	ft_print_int(long long int nb, int count);
int	ft_print_hexup(unsigned int nb, int count);
int	ft_print_hexlow(unsigned int nb, int count);
int	ft_print_str(char *s);
int	ft_printf(const char *str, ...);
int	ft_print_u(unsigned int nb);

#endif
