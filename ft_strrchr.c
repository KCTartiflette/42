/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:07:13 by pribolzi          #+#    #+#             */
/*   Updated: 2024/10/23 12:59:53 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if ((unsigned char)s[i] == (unsigned char) c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}

/*#include <string.h>
int	main(void)
{
	const char *s = "Phrase";
	int c = 'z';
	char *result;

	result = ft_strrchr(s, c);
	if (result)
		printf("%s\n", result);
	else
		printf("Character not found.\n");

//	Pour comparer avec la fonction originale
	char *orig_result = strrchr(s, c);
	if (orig_result)
		printf("%s\n", orig_result);
	else
		printf("Character not found in original function.\n");

	return (0);
}*/
