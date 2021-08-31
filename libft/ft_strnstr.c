/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoikoet <igoikoet@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:45:08 by igoikoet          #+#    #+#             */
/*   Updated: 2021/08/04 15:20:09 by igoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0' && n)
	{
		if (n < ft_strlen(s2))
			break ;
		if (ft_strncmp(s1 + i, s2, ft_strlen(s2)) == 0)
			return ((char *)s1 + i);
		n--;
		i++;
	}
	return (NULL);
}
