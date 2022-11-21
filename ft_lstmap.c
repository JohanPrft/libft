/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:20:54 by jprofit           #+#    #+#             */
/*   Updated: 2022/11/21 18:32:11 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cpy;
	t_list	*head;

	if (!lst || !(f) || !(del))
		return (NULL);
	cpy = ft_lstnew((f)(lst->content));
	if (!cpy)
		return (NULL);
	lst = lst->next;
	head = cpy;
	while (lst)
	{
		cpy->next = ft_lstnew((f)(lst->content));
		if (!cpy->next)
		{
			ft_lstclear(&head, (del));
			return (NULL);
		}
		cpy = cpy->next;
		lst = lst->next;
	}
	return (head);
}
