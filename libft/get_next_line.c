/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:36:22 by bhielsch          #+#    #+#             */
/*   Updated: 2022/10/25 12:16:50 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_next_line(int fd)
{
	static char	*str;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str = ft_read(fd, str);
	if (!str)
		return (NULL);
	line = ft_line(str);
	str = ft_line_minus(str);
	return (line);
}

char	*ft_read(int fd, char *str)
{
	char	*mybuffer;
	int		i;

	mybuffer = malloc((BUFFER_SIZE + 1) * (sizeof(char)));
	if (!mybuffer)
		return (NULL);
	i = 1;
	while (!ft_strchr(str, '\n') && i != 0)
	{
		i = read(fd, mybuffer, BUFFER_SIZE);
		if (i == -1)
		{
			free(mybuffer);
			return (NULL);
		}
		mybuffer[i] = '\0';
		str = ft_strjoin(str, mybuffer);
	}
	free(mybuffer);
	return (str);
}

char	*ft_line_minus(char *str)
{
	char	*new_str;
	int		i;
	int		k;

	k = 0;
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	new_str = (char *)malloc(sizeof(char *) * ft_strlen(str) - i + 1);
	if (!new_str)
		return (NULL);
	i++;
	while (str[i])
		new_str[k++] = str[i++];
	new_str[k] = '\0';
	free(str);
	return (new_str);
}

// int	main(void)
// {
// 	char	*line;
// 	int		i;
// 	int		fd1;
// 	fd1 = open("test.txt", O_RDONLY);
// 	i = 1;
// 	while (i < 10)
// 	{
// 		line = get_next_line(fd1);
// 		printf("line [%02d]: %s", i, line);
// 		free(line);
// 		i++;
// 	}
// 	close(fd1);
// 	return (0);
// }
