/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:10:54 by pribolzi          #+#    #+#             */
/*   Updated: 2024/10/21 20:26:10 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*dst;
	unsigned char	c2;
	size_t			i;

	c2 = (unsigned char) c;
	dst = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		dst[i] = c2;
		i++;
	}
	return (s);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[50] = "Bonjour, voici une chaîne de test !";
	char str2[50] = "Bonjour, voici une chaîne de test !";

	
	printf("Avant memset : %s\n", str);

	ft_memset(str, 'A', 7);
	memset(str2, 'A', 7);
	printf("Après memset : %s\n", str);
	printf("Vraie fonction : %s", str2);
}*/