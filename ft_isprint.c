/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:29:35 by pribolzi          #+#    #+#             */
/*   Updated: 2024/10/21 16:56:17 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	else
		return (0);
}

/*#include <ctype.h>
#include <stdio.h>
int	main()
{
	int c = 126;
	printf("%d\n", ft_isprint(c));
	printf("%d", isprint(c));
}*/