/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-abdi <ael-abdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:57:16 by ael-abdi          #+#    #+#             */
/*   Updated: 2024/04/26 20:35:28 by ael-abdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		d;
	int		mr;
	size_t	ben;

	d = 0;
	mr = 1;
	ben = 0;
	while (str[d] == 32 || (str[d] >= 9 && str[d] <= 13))
		d++;
	if (str[d] == '-' || str[d] == '+')
	{
		if (str[d] == '-')
			mr = -mr;
		d++;
	}
	while (str[d] >= '0' && str[d] <= '9')
	{
		ben = ben * 10 + str[d] - 48;
		if (ben >= 9223372036854775807 && mr == 1)
			return (-1);
		else if (ben > 9223372036854775807 && mr == -1)
			return (0);
		d++;
	}
	return (mr * ben);
}

// int main()
// {
// 	printf("%d", ft_atoi("1234560"));
// }