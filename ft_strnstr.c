/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:21:52 by jprofit           #+#    #+#             */
/*   Updated: 2022/11/10 14:45:22 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	int	temp;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && len > 0)
	{
		j = 0;
		temp = len;
		while (haystack[i + j] == needle [j] && temp > 0)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
			len--;
		}
		i++;
		len--;
	}
	return (NULL);
}
