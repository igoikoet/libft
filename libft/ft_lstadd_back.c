/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoikoet <igoikoet@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:09:23 by igoikoet          #+#    #+#             */
/*   Updated: 2021/08/23 17:49:14 by igoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = *lst;
	if (!(*lst))
		*lst = new;
	while (last != NULL)
	{
		if (last->next == NULL)
		{
			last->next = new;
			break ;
		}
		last = last->next;
	}
}
