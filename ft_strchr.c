/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-abdi <ael-abdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:00:47 by ael-abdi          #+#    #+#             */
/*   Updated: 2024/04/27 09:57:54 by ael-abdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	d;

	i = 0;
	d = (char)c;
	while (d != s[i])
	{
		if (s[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return ((char *)(s + i));
}
int main()
{
	printf("%s", ft_strchr("hello world 1337", 'w'))
}