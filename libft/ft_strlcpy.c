/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoikoet <igoikoet@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 15:14:50 by igoikoet          #+#    #+#             */
/*   Updated: 2021/08/30 13:01:35 by igoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (dest == NULL && src == NULL)
		return (0);
	while (src[count])
		count++;
	while (src[i] && i + 1 < size)
	{
		dest [i] = src[i];
		i++;
	}
	if (size)
		dest[i] = '\0';
	return (count);
}
