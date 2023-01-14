/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayed <ybayed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 09:54:46 by ybayed            #+#    #+#             */
/*   Updated: 2022/12/02 18:56:52 by ybayed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	int	j;

	j = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
			j++;
		while (*s && *s != c)
			s++;
	}
	return (j);
}

static int	size(const char *s, char c)
{
	int	j;

	j = 0;
	while (*s && *s == c)
		s++;
	while (*s && *s != c)
	{
		j++;
		s++;
	}
	return (j);
}

static char	*allocation_of_words(const char *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	word = (char *)malloc(size(s, c) * sizeof(char) + 1);
	if (!word)
		return (NULL);
	while (*s && *s != c)
		word[i++] = *s++;
	word[i] = '\0';
	return (word);
}

static void	frees(char **ptr, int j)
{
	while (j > 0)
	{
		free(ptr[j - 1]);
		j--;
	}
	free(ptr);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	int		i;
	char	**ptr;

	j = 0;
	i = 0;
	if (!s)
		return (NULL);
	ptr = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			ptr[j++] = allocation_of_words(&s[i++], c);
		if (j > 0 && !ptr[j - 1])
			return (frees(ptr, j), NULL);
		while (s[i] && s[i] != c)
			i++;
	}
	ptr[j] = NULL;
	return (ptr);
}
