/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:22:55 by bhielsch          #+#    #+#             */
/*   Updated: 2022/10/13 17:23:19 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_inputcheck(int nb, int size, int fd);

static int	ft_count(int nb);

void	ft_putnbr_fd(int nb, int fd)
{
	int		size;

	size = ft_count(nb);
	if (nb == -2147483648)
		write(fd, "-2147483648", 11);
	else if (nb == 0)
		write (fd, "0", 1);
	else
		ft_inputcheck(nb, size, fd);
}

int	ft_count(int nb)
{
	int	temp;
	int	count;

	temp = nb;
	count = 0;
	while (temp != 0)
	{
		temp = temp / 10;
		count++;
	}
	return (count);
}

void	ft_inputcheck(int nb, int size, int fd)
{
	int		x;
	char	arr[11];

	x = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		write (fd, "-", 1);
	}
	if (nb > 0)
	{
		while (x < size)
		{
			arr[x] = nb % 10 + '0';
			nb = nb / 10;
			x++;
		}
	}	
	while (x > 0)
	{
		write (fd, &arr[x - 1], 1);
		x--;
	}
}
