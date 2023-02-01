/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:29:58 by bhielsch          #+#    #+#             */
/*   Updated: 2022/10/05 11:30:27 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c < 123 && c > 96)
		return (c - 32);
	else
		return (c);
}

// int main()
// {
//     int c = '+';
//     printf("%c", ft_toupper(c));
//     printf("%c", toupper(c));
// }
