/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:09:48 by pribolzi          #+#    #+#             */
/*   Updated: 2024/10/24 15:04:44 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*rec_itoa(long int nb, int i, char *str)
{
	if (nb >= 10)
		rec_itoa(nb / 10, i - 1, str);
	str[i] = nb % 10 + '0';
	return (str);
}

static int	count_len(long int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*str;
	int			signe;
	long int	nb;

	nb = n;
	signe = 0;
	if (nb < 0)
	{
		signe = 1;
		nb *= -1;
	}
	len = count_len(nb);
	str = malloc(sizeof(char) * (len + signe + 1));
	if (!str)
		return (NULL);
	if (signe == 1)
		str[0] = '-';
	rec_itoa(nb, len + signe - 1, str);
	str[len + signe] = '\0';
	return (str);
}

/*#include <stdio.h>
int	main()
{
	int n = 4880035;
	char *str = ft_itoa(n);
	printf("%s", str);
	free (str);
}*/