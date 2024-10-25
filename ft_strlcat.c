/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:35:08 by pribolzi          #+#    #+#             */
/*   Updated: 2024/10/24 22:22:12 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_size;
	size_t	src_size;

	i = 0;
	src_size = ft_strlen(src);
	if (!dst && size == 0)
		return (ft_strlen(src));
	dst_size = ft_strlen(dst);
	while (*dst != '\0' && dst_size < size)
		dst++;
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
	const char *src = "bbbb";
	char *dst = NULL;
	size_t size;

	size = 0;
	//printf("%zu\n", strlcat (dst, src, size));
	printf("%zu\n", ft_strlcat (dst, src, size));
}*/