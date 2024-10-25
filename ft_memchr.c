/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:05:47 by pribolzi          #+#    #+#             */
/*   Updated: 2024/10/25 12:44:24 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	c2;
	size_t			i;

	if (n == 0 && !s)
		return (NULL);
	i = 0;
	str = (unsigned char *) s;
	c2 = (unsigned char) c;
	while (i < n)
	{
		if (str[i] == c2)
			return (&str[i]);
		i++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>
int	main()
{
	unsigned char *str = NULL;
	int c = ' ';
	printf("%p\n", ft_memchr(str, c, 5));
//	printf("%p", memchr(str, c, 0));
}*/