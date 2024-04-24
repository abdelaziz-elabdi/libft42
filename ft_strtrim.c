/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-abdi <ael-abdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:01:54 by ael-abdi          #+#    #+#             */
/*   Updated: 2023/11/27 14:20:38 by ael-abdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cherche(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	len = ft_strlen(s1)-1;
	while (ft_cherche(set, s1[i]) == 1)
		i++;
	while (len >= 0 && ft_cherche(set, s1[len]) == 1)
	{
		len--;
	}
	return (ft_substr(s1, i, len - i + 1));
}
