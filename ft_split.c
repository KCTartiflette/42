/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:38:39 by pribolzi          #+#    #+#             */
/*   Updated: 2024/10/25 17:38:53 by pribolzi         ###   ########.fr       */
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

static char	*fill_word(char const *s, char c)
{
	char	*word;
	size_t	len;
	size_t	i;

	len = ft_strlen_mod(s, c);
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (*s && *s != c)
	{
		word[i] = *s++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**final;
	size_t	k;

	if (!s)
		return (NULL);
	final = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!final)
		return (NULL);
	k = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
		{
			final[k] = fill_word(s, c);
			while (*s && *s != c)
				s++;
			if (!final[k])
				return (res_free(final));
			k++;
		}
	}
	final[k] = NULL;
	return (final);
}

#include <stdio.h>

int main()
{
    char const *s = NULL;
    char c = ' ';
    char **final = ft_split(s, c);
    int i = 0;

	if (!s)
		{
			printf("S = NULL\n");
			return (0);
		}	
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
}