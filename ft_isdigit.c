/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:16:45 by pribolzi          #+#    #+#             */
/*   Updated: 2024/10/21 16:56:20 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	else
		return (0);
}

/*#include <ctype.h>
#include <stdio.h>
int	main()
{
	int c = 55;
	printf("%d\n", ft_isdigit(c));
	printf("%d", isdigit(c));
}*/