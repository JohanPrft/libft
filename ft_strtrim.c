/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:40:54 by jprofit           #+#    #+#             */
/*   Updated: 2022/11/14 09:21:36 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ischarset(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	skipfrontset(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (ischarset(s1[i], set))
		i++;
	return (i);
}

size_t	skipbackset(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1) - 1;
	while (ischarset(s1[len], set))
		len--;
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		start;
	int		j;
	int		end;

	start = skipfrontset(s1, set);
	end = skipbackset(s1, set);
	res = malloc(sizeof(res) * (end - start + 1));
	if (res == 0)
		return (NULL);
	j = 0;
	while (start < end)
	{
		res[j++] = s1[start++];
	}
	res[j] = '\0';
	return (res);
}
