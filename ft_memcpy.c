/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:29:51 by pribolzi          #+#    #+#             */
/*   Updated: 2024/10/25 17:34:11 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*srce;
	size_t			i;

	if (n == 0 && !dest && !src)
		return (NULL);
	dst = (unsigned char *) dest;
	srce = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		dst[i] = srce[i];
		i++;
	}
	return (dst);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	//unsigned char *src = NULL;
	unsigned char *src2 = NULL;
	//unsigned char *dst = NULL;
	unsigned char *dst2 = NULL;
	//ft_memcpy(dst, src, 20);
	ft_memcpy(dst2, src2, 0);
	// memcpy(dst2, src2, 0);
	//printf("%s\n", dst);
	printf("Vraie fonction : %s", dst2);
}