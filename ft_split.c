/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:23:31 by jprofit           #+#    #+#             */
/*   Updated: 2022/11/18 16:51:44 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lastchar(const char *s, char c, int i)
{
	if (s[i] != c)
	{
		if (s[i + 1] == c || s[i + 1] == '\0')
		{
			return (1);
		}
	}
	return (0);
}

static int	len_str(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static char	**mallocerror(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		free(tab[i]);
		i++;
	}
	free (tab);
	return (NULL);
}

static char	**ft_writestr(char **tab, const char *s, char c, int nbr)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	i = 0;
	while (i < nbr)
	{
		while (*s == c)
			s++;
		len = len_str(s, c);
		str = malloc(sizeof(char) * (len + 1));
		if (!str)
			return (mallocerror(tab));
		j = 0;
		while (j < len)
			str[j++] = *s++;
		str[j] = '\0';
		tab[i] = str;
		i++;
	}
	tab[i] = 0;
	return (tab);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (lastchar(s, c, i) == 1)
			count++;
		i++;
	}
	tab = malloc(sizeof(*tab) * (count + 1));
	if (!tab)
		return (NULL);
	return (ft_writestr(tab, s, c, count));
}
