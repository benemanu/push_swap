/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:29:25 by bhielsch          #+#    #+#             */
/*   Updated: 2022/10/05 11:29:41 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c < 91 && c > 64)
		return (c + 32);
	else
		return (c);
}

// int main()
// {
//     int c = 'r';
//     printf("%c", ft_tolower(c));
//     printf("%c", tolower(c));
// }
