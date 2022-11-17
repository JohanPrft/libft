/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:51:19 by jprofit           #+#    #+#             */
/*   Updated: 2022/11/16 17:10:39 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;

	str = (char *)s;
	while (*str != (char)c && n > 0)
	{
		printf("c = %i, *str = %i\n", c, *(char *)str);
		if ((char)c != '\0' && *str == '\0')
			return (NULL);
		str++;
		n--;
	}
	if (*str == (char)c && n != 0)
		return ((void *)str);
	else
		return (NULL);
}
