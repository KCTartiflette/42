/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:30:31 by pribolzi          #+#    #+#             */
/*   Updated: 2024/10/24 17:12:42 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void(*del)(void *))
{
	t_list	*new;
	t_list	*final;
	void	*ptr;

	if (!lst || !f || !del)
		return (NULL);
	final = NULL;
	while (lst)
	{
		ptr = f(lst->content);
		new = ft_lstnew(ptr);
		if (!new)
		{
			del(ptr);
			ft_lstclear(&final, del);
			return (NULL);
		}
		ft_lstadd_back(&final, new);
		lst = lst->next;
	}
	return (final);
}

//utiliser un ptr void pour pouvoir free avec del si probleme avec new