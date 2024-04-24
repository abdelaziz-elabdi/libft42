/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-abdi <ael-abdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:01:13 by ael-abdi          #+#    #+#             */
/*   Updated: 2023/11/30 11:48:20 by ael-abdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	j = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (j);
	k = 0;
	while (dst[i] && i < dstsize)
		i++;
	if (dstsize - 1 > i && dstsize > 0)
	{
		while (src[k] && i + k < dstsize - 1)
		{
			dst[i + k] = src[k];
			k++;
		}
		dst[i + k] = '\0';
	}
	return (i + j);
}
