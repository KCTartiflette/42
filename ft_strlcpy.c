/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:20:17 by pribolzi          #+#    #+#             */
/*   Updated: 2024/10/21 20:26:44 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	s;

	i = 0;
	s = 0;
	while (src[s])
		s++;
	if (size <= 0)
		return (s);
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (s);
}

/*
#include <bsd/string.h>
#include <stdio.h>
int	main()
{
	const char src[] = "Je";
	char dst[99];
	size_t size = 2;
	printf("%zu\n", ft_strlcpy(dst, src, size));
	printf("%zu", strlcpy(dst, src, size));
// pour  compiler : -lbsd
}*/