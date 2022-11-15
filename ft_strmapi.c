/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:54:59 by jprofit           #+#    #+#             */
/*   Updated: 2022/11/15 10:21:57 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	f(unsigned int i, char c)
{
	(void)i;
	c += 3;
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*str;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(sizeof(str) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	origin[] = "abcde.";
	char	*crypted;
	char 	(*functionPtr)(unsigned int, char) = &f;

	crypted = ft_strmapi(origin, functionPtr);
	printf("%s\n", crypted);
	return (0);
}
