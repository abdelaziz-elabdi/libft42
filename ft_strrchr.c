/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-abdi <ael-abdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:01:49 by ael-abdi          #+#    #+#             */
/*   Updated: 2023/11/27 14:24:13 by ael-abdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	d;
	int		k;

	d = (char)c;
	k = ft_strlen(s);
	while (d != s[k])
	{
		if (k == 0)
		{
			return (0);
		}
		k--;
	}
	return ((char *)(s + k));
}
