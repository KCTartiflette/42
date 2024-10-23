/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:00:57 by pribolzi          #+#    #+#             */
/*   Updated: 2024/10/21 20:26:07 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*srce;
	size_t			i;

	dst = (unsigned char *) dest;
	srce = (unsigned char *) src;
	if (!dst && !srce)
		return (NULL);
	if (dst > srce)
	{
		i = n;
		while (i > 0)
		{
			i--;
			dst[i] = srce[i];
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char src[] = "Je suis une phrase";
    char dest[20];
	char dest2[20];

    printf("Avant memmove custom: dest = \"%s\"\n", dest);
    ft_memmove(dest, src, 5);
    printf("Après memmove custom: dest = \"%s\"\n", dest);

    printf("Avant memmove standard: dest = \"%s\"\n", dest2);
    memmove(dest2, src, 5);
    printf("Après memmove standard: dest= \"%s\"\n", dest2);
}*/