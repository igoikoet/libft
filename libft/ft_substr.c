/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoikoet <igoikoet@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 17:09:08 by igoikoet          #+#    #+#             */
/*   Updated: 2021/08/11 18:36:08 by igoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int str, size_t len)
{
	char			*new;
	size_t			b;
	unsigned int	n;

	if (!s)
		return (NULL);
	n = ft_strlen(s);
	if (str > n)
		return (ft_strdup(""));
	if (len > n)
		len = n;
	new = (char *)malloc(sizeof(*s) * (len + 1));
	if (!new)
		return (NULL);
	b = 0;
	if (n > str)
	{
		while (s[str + b] && b < len)
		{
			new[b] = s[str + b];
			b++;
		}
	}
	new[b] = '\0';
	return (new);
}
