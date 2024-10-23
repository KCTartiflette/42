/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:25:18 by pribolzi          #+#    #+#             */
/*   Updated: 2024/10/23 12:59:32 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_min(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
			if (set[j] == '\0')
				return (i);
		}
		i++;
	}
	return (i);
}

static int	check_max(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s1) - 1;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
			if (set[j] == '\0')
				return (i + 1);
		}
		i--;
	}
	return (i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	max;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (!s1 || !set)
		return (NULL);
	if (set[0] == '\0' || s1[0] == '\0')
		return (ft_strdup((char *)s1));
	i = check_min(s1, set);
	max = check_max(s1, set);
	if (i >= max)
		return (ft_strdup(""));
	str = malloc(sizeof(char) * (max - i + 1));
	if (!str)
		return (NULL);
	while (i < max)
		str[j++] = s1[i++];
	str[j] = '\0';
	return (str);
}

/*#include <stdio.h>
int	main()
{
	char const *s1 = "Je suis une phrase";
	char const *set = "Je";
	char *str = ft_strtrim(s1, set);
	printf("%s", str);
	free(str);
}*/