/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:39:34 by jprofit           #+#    #+#             */
/*   Updated: 2022/11/17 11:40:13 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	if (s == NULL || len == 0)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
	{
		sub = ft_calloc(1, sizeof(*sub));
		if (sub == NULL)
			return (NULL);
		return (sub);
	}
	sub = ft_calloc((len + 1), sizeof(*sub));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (s[start] && len > 0)
	{
		sub[i] = s[start];
		i++;
		start++;
		len--;
	}
	sub[i] = '\0';
	return (sub);
}
