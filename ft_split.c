/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:38:39 by pribolzi          #+#    #+#             */
/*   Updated: 2024/10/23 12:10:38 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	if (s[i] == '\0')
		return (0);
	while (s[i])
	{
		if ((s[i] != c) && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static size_t	ft_strlen_mod(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s != c && *s)
	{
		s++;
		i++;
	}
	return (i);
}

static void	*res_free(char **final)
{
	size_t	i;

	i = 0;
	while (final[i])
	{
		free(final[i]);
		i++;
	}
	free (final);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**final;
	size_t	j;
	size_t	k;

	final = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!final)
		return (NULL);
	k = 0;
	while (*s)
	{
		j = 0;
		while (*s == c)
			s++;
		if (*s != c && *s != '\0')
		{
			final[k] = malloc(sizeof(char) * ft_strlen_mod(s, c) + 1);
			if (!final[k])
				return (res_free(final));
			while (*s && *s != c)
				final[k][j++] = *s++;
			final[k++][j] = '\0';
		}
	}
	final[k] = NULL;
	return (final);
}

/*#include <stdio.h>

int main()
{
    char const s[] = "Hello! fet erter er";
    char c = ' ';
    char **final = ft_split(s, c);
    int i = 0;

    while (final[i])
    {
        printf("%s\n", final[i]);
        i++;
    }

    i = 0;
    while (final[i])
    {
        free(final[i]);
        i++;
    }
    free(final);

    return (0);
}*/