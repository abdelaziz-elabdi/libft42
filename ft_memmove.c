/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-abdi <ael-abdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:59:34 by ael-abdi          #+#    #+#             */
/*   Updated: 2024/06/06 21:48:20 by ael-abdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*de;
	char	*so;

	de = (char *)dst;
	so = (char *)src;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (len)
		{
			de[len - 1] = so[len - 1];
			len--;
		}
	}
	else 
	{
		ft_memcpy(de, so, len);
	}
	return (dst);
}
