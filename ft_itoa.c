/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-abdi <ael-abdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:57:02 by ael-abdi          #+#    #+#             */
/*   Updated: 2023/11/27 15:38:29 by ael-abdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wcalc(long k)
{
	int	l;

	l = 0;
	if (k < 0)
	{
		l++;
		k = -k;
	}
	while (k >= 10)
	{
		k = k / 10;
		l++;
	}
	if (k == 0 && l == 0)
	{
		l++;
		return (l);
	}
	l = l + 1;
	return (l);
}

char	*ft_itoa(int n)
{
	char	*d;
	long	i;
	int		j;

	i = n;
	j = wcalc(i);
	if (!i)
		return (ft_strdup("0"));
	d = malloc(j + 1);
	if (!d)
		return (NULL);
	d[j] = '\0';
	if (i < 0)
	{
		d[0] = '-';
		i = -i;
	}
	j--;
	while (i > 0)
	{
		d[j] = (i % 10) + 48;
		i = i / 10;
		j--;
	}
	return (d);
}
