/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:44:56 by bhielsch          #+#    #+#             */
/*   Updated: 2022/10/14 17:38:45 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	new = ft_lstnew((*f)(lst -> content));
	if (!new)
		return (NULL);
	temp = new;
	while (lst -> next)
	{
		lst = lst -> next;
		new = ft_lstnew((*f)(lst -> content));
		if (!new)
		{
			ft_lstclear(&temp, (*del));
			return (NULL);
		}
		ft_lstadd_back(&temp, new);
	}
	return (temp);
}
