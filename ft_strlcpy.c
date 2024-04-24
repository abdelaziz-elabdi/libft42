/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-abdi <ael-abdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:01:19 by ael-abdi          #+#    #+#             */
/*   Updated: 2023/11/27 15:39:26 by ael-abdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	k;

	k = ft_strlen(src);
	if (size == 0)
		return (k);
	while (*src && --size > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (k);
}
