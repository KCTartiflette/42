/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:35:08 by pribolzi          #+#    #+#             */
/*   Updated: 2024/10/22 20:50:44 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_size;
	size_t	src_size;

	i = 0;
	dst_size = 0;
	src_size = 0;
	while (*dst != '\0' && dst_size < size)
	{
		dst_size++;
		dst++;
	}
	while (src[src_size])
		src_size++;
	if (size <= dst_size || size <= 0)
		return (src_size + size);
	while (src[i] != '\0' && dst_size + i + 1 < size)
	{
		*dst = src[i];
		dst++;
		i++;
	}
	*dst = '\0';
	return (dst_size + src_size);
}

/*#include <stdio.h>
#include <bsd/string.h>

int	main()
{
	const char src[] = "bbbb";
	//char dst[] = "aaaaa";
	//size_t size;

	//size = 7;
	//printf("%zu\n", ft_strlcat (dst, src, size));
	printf("%zu\n", ft_strlcat (NULL, src, 5));
}*/