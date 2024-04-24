/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-abdi <ael-abdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:57:30 by ael-abdi          #+#    #+#             */
/*   Updated: 2023/11/27 15:38:16 by ael-abdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ben;
	size_t	k;

	k = 0;
	if ((int)count < 0 || (int)size < 0)
		return (NULL);
	ben = malloc(count * size);
	if (!ben)
		return (NULL);
	while (count * size > k)
	{
		ben[k] = 0;
		k++;
	}
	return (ben);
}
