/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoikoet <igoikoet@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 15:04:49 by igoikoet          #+#    #+#             */
/*   Updated: 2021/08/03 15:50:36 by igoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*f;
	char	*t;
	size_t	a;

	f = (char *)src;
	t = (char *)dest;
	a = n;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
		while (n--)
			t[n] = f[n];
	else
		while (n--)
			*t++ = *f++;
	return (dest);
}
