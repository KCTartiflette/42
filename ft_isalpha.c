/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:05:08 by pribolzi          #+#    #+#             */
/*   Updated: 2024/10/21 16:56:26 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1024);
	else
		return (0);
}

/*#include <ctype.h>
#include <stdio.h>
int	main()
{
	int c = 0;
	while (c <= 255)
	{
	//printf("%d\n", ft_isalpha(c));
	printf("Valeur de %d = %d\n", c, isalpha(c));
	c++;
	}
}*/