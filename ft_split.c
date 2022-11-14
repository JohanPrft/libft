/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:23:31 by jprofit           #+#    #+#             */
/*   Updated: 2022/11/14 16:31:07 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		aresame(char c1, char c2)
{
	if (c1 == c2)
		return (1);
	return (0);
}

char	**createtab(char const *s, char c)
{
	char	**tab;
	int		i;
	int		oldi;
	int		nbtab;

	i = 0;
	nbtab = 0;
	while (s[i])
	{
		while (aresame(s[i], c))
			i++;
		oldi = i;
		while (!aresame(s[i], c) && s[i])
			i++;
		if (i > oldi)
			nbtab++;
	}
	printf("sizeofmalloc = %i\n", nbtab + 1);
	tab = malloc(sizeof(tab) * (nbtab + 1));
	return (tab);
}

void	filltab(char	**tab, char const *s, char c)
{
	int	i;
	int	j;
	int	oldi;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (aresame(s[i], c))
			i++;
		oldi = i;
		while (!aresame(s[i], c) && s[i])
			i++;
		if (i > oldi)
		{
			tab[j] = ft_calloc(i - oldi + 1, sizeof(*tab));
			ft_strlcpy(tab[j], &s[oldi], i - oldi + 1);
			j++;
		}
	}
	tab[j] = ft_calloc(1, sizeof(*tab));
	tab[j][0] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	tab = createtab(s, c);
	filltab(tab, s, c);
	return (tab);
}
