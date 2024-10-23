/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:22:25 by pribolzi          #+#    #+#             */
/*   Updated: 2024/10/21 16:56:29 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (8);
	else
		return (0);
}

/*
#include <ctype.h>
#include <stdio.h>
int	main()
{
	int c = 48;
	printf("%d\n", ft_isalnum(c));
	printf("%d", isalnum(c));
}*/