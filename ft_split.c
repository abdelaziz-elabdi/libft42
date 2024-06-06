/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-abdi <ael-abdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:00:41 by ael-abdi          #+#    #+#             */
/*   Updated: 2024/06/06 21:49:57 by ael-abdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// count words
static int	cwords(char *s, char c)
{
	int	l;

	l = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
			l++;
		while (*s && *s != c)
			s++;
	}
	return (l);
}
// allocation word
static char	*malloc_string(const char *s, char c)
{
	char	*t;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	t = malloc(i + 1);
	if (!t)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		t[i] = s[i];
		i++;
	}
	t[i] = '\0';
	return (t);
}
// clean pointer
static char	**clean_rows_(char **words, int i)
{
	while (i >= 0)
	{
		free(words[i]);
		i--;
	}
	free(words);
	return (NULL); 
}
// split 
char	**ft_split(char const *s, char c)
{
	int		i;
	char	**table;

	if (s == NULL)
		return (NULL);
	i = cwords((char *)s, c);
	table = (char **)malloc(sizeof(char *) * (i + 1));
	if (!table)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s && *s != c)
		{
			table[i] = malloc_string(s, c);
			if (table[i++] == NULL)
				return (clean_rows_(table, --i));
			while (*s && *s != c)
				s++;
		}
	}
	return (table[i] = NULL, table);
}
