/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:07:29 by pribolzi          #+#    #+#             */
/*   Updated: 2024/10/22 19:06:39 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	if (nmemb > SIZE_MAX / size)
		return (NULL);
	else
		ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < (size * nmemb))
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
