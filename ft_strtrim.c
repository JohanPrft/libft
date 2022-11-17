/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:40:54 by jprofit           #+#    #+#             */
/*   Updated: 2022/11/17 12:24:19 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ischarset(char c, const char *set)
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

static size_t	skipfrontset(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (ischarset(s1[i], set))
		i++;
	return (i);
}

static size_t	skipbackset(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1) - 1;
	while (ischarset(s1[len], set))
		len--;
	return (len + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		start;
	int		j;
	int		end;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	start = skipfrontset(s1, set);
	end = skipbackset(s1, set);
	if (start > end)
		return (ft_strdup(""));
	res = malloc(sizeof(*res) * (end - start + 1));
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

#include <stdio.h>

int	main(void)
{
	char	s1[] = "aa";
	char	set[] = "aa";

	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}
