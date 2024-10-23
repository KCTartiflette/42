/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:52:05 by pribolzi          #+#    #+#             */
/*   Updated: 2024/10/21 18:24:26 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if ((unsigned char) c == '\0')
	{
		while (s[i])
			i++;
		return ((char *)&s[i]);
	}
	while (s[i] != '\0')
	{
		if ((unsigned char)s[i] == (unsigned char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>
int main()
{
	const char *s = "teste";
	int c = 'e';

	printf("%s\n", ft_strchr(s, c));
	printf("%s", strchr(s, c));
}*/