/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:23:31 by jprofit           #+#    #+#             */
/*   Updated: 2022/11/17 13:11:56 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**createtab(char const *s, char c)
{
	char	**tab;
	int		i;
	int		oldi;
	int		nbtab;

	i = 0;
	nbtab = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		oldi = i;
		while (!(s[i] == c) && s[i])
			i++;
		if (i > oldi)
			nbtab++;
	}
	tab = malloc(sizeof(tab) * (nbtab + 1));
	if (tab == NULL)
		return (NULL);
	return (tab);
}

static char	**taberror(char	**tab, int iline)
{
	while (iline >= 0)
	{
		free(tab[iline]);
		iline--;
	}
	free(tab);
	return (NULL);
}

/* find the position of the first letter  */

static int	bounds(const char *s, int *i, int *oldi, char c)
{
	while (s[*i] == c)
		(*i)++;
	*oldi = *i;
	while (!(s[*i] == c) && s[*i])
		(*i)++;
	return (*i - *oldi);
}

static char	**filltab(char **tab, const char *s, char c)
{
	int	i;
	int	j;
	int	oldi;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (bounds(s, &i, &oldi, c))
		{
			tab[j] = malloc(sizeof(*tab) * (i - oldi + 1));
			if (tab == NULL)
				return (taberror(tab, j));
			ft_strlcpy(tab[j], &s[oldi], i - oldi + 1);
			j++;
		}
	}
	tab[j] = malloc(sizeof(*tab) * 1);
	if (tab[j] == NULL)
		return (taberror(tab, j));
	tab[j][0] = '\0';
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (s == NULL)
		return (NULL);
	tab = createtab(s, c);
	if (tab == NULL)
		return (NULL);
	if (filltab(tab, s, c) == NULL)
		return (NULL);
	return (tab);
}

int	main(void)
{
	char	s[] = "jespere j'ai reussi misere ";
	char	c = 'z';
	char	**tab = 0;
	int		i;

	tab = ft_split(s, c);
	i = 0;
	while (tab[i][0])
	{
		printf("tab[%i] :	%s\n", i, tab[i]);
		i++;
	}
	printf("tab[%i] :	%s\n", i, tab[i]);
	return (0);
}
