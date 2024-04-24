/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-abdi <ael-abdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:25:05 by ael-abdi          #+#    #+#             */
/*   Updated: 2023/11/30 11:45:19 by ael-abdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ben;

	if (!lst)
		return (NULL);
	ben = lst;
	while ((ben -> next) != 0)
	{
		ben = ben -> next;
	}
	return (ben);
}
