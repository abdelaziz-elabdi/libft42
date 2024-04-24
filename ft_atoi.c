/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-abdi <ael-abdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:57:16 by ael-abdi          #+#    #+#             */
/*   Updated: 2023/11/27 15:38:05 by ael-abdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		l;
	int		mr;
	size_t	ben;

	l = 0;
	mr = 1;
	ben = 0;
	while (str[l] == 32 || (str[l] >= 9 && str[l] <= 13))
		l++;
	if (str[l] == '-' || str[l] == '+')
	{
		if (str[l] == '-')
			mr = -mr;
		l++;
	}
	while (str[l] >= '0' && str[l] <= '9')
	{
		ben = ben * 10 + str[l] - 48;
		if (ben >= 9223372036854775807 && mr == 1)
			return (-1);
		else if (ben > 9223372036854775807 && mr == -1)
			return (0);
		l++;
	}
	return (mr * ben);
}
