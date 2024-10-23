/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:37:46 by pribolzi          #+#    #+#             */
/*   Updated: 2024/10/21 20:26:53 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *) &big[i]);
		}
		i++;
	}
	return (0);
}

/*
#include <string.h>
#include <stdio.h>
int	main()
{
	const char a[] = "Une botte de foin";
	const char b[] = "botte";
	printf("%s\n", ft_strnstr(a, b, 17));
	printf("%s\n", ft_strnstr(a, b, 3));
//	printf("%s\n", strnstr(a, b, 17));
//	printf("%s\n", strnstr(a, b, 3));
}*/
