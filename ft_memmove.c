/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:00:57 by pribolzi          #+#    #+#             */
/*   Updated: 2024/10/25 17:31:41 by pribolzi         ###   ########.fr       */
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
		ft_memcpy(dest, src, n);
	return (dst);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    char *src = NULL;
    char *dest = "cc";
	char *dest2 = "cc";
	size_t n = 5;

	ft_memmove(dest, src, n);
	printf("Après memmove custom: dest = \"%s\"\n", dest);
	memmove(dest2, src, n);
	printf("Après memmove standard: dest= \"%s\"\n", dest2);
}
