/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:39:34 by jprofit           #+#    #+#             */
/*   Updated: 2022/11/11 13:33:19 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	sublen;
	int		i;

	sublen = (size_t)ft_strlen(&s[start]);
	if (sublen < len)
		sub = malloc(sizeof(sub) * (sublen + 1));
	else
		sub = malloc(sizeof(sub) * (len));
	if (sub == 0)
		return (NULL);
	i = 0;
	while (s[start] && len - 1 > 0)
	{
		sub[i] = s[start];
		i++;
		start++;
		len--;
	}
	sub[i] = '\0';
	return (sub);
}
