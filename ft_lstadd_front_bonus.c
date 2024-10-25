/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:17:40 by pribolzi          #+#    #+#             */
/*   Updated: 2024/10/24 15:58:29 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*void	voisin_humain(humain *paul, humain *ledion)
{
	paul->next = ledion;
	paul->age = 24;
	paul->next->age = 21;
}

typedef struct s_list
{
	int				age;
	struct s_list	*next;
}					t_list;

t_list *paul = malloc(sizeof(t_list));*/
