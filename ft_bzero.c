/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:58:46 by pribolzi          #+#    #+#             */
/*   Updated: 2024/10/21 20:25:42 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dst;
	size_t			i;

	i = 0;
	dst = (unsigned char *) s;
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
}

/*#include <stdio.h>
#include <strings.h>

int main(void)
{
	char str[50] = "Bonjour, voici une chaîne de test !";
	char str2[50] = "Bonjour, voici une chaîne de test !";
	
	printf("Avant bzero : %s\n", str);

	ft_bzero(str, 7);
	bzero(str2, 7);
	
	printf("Après bzero : %s\n", str);
	printf("Vraie fonction : %s", str2);

}*/
