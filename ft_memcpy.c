/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:29:51 by pribolzi          #+#    #+#             */
/*   Updated: 2024/10/21 20:26:02 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*srce;
	size_t			i;

	dst = (unsigned char *) dest;
	srce = (unsigned char *) src;
	if (!dst && !srce)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dst[i] = srce[i];
		i++;
	}
	return (dst);
}

/*#include <stdio.h>
#include <string.h>

int	main()
{
	unsigned char src[] = "Je suis la source";
	unsigned char src2[] = "Je suis la source";
	unsigned char dst[99] = "";
	unsigned char dst2[99]= "";
	ft_memcpy(dst, src, 20);
	memcpy(dst2, src2, 20);
	printf("%s\n", dst);
	printf("Vraie fonction : %s", dst2);
}*/