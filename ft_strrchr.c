/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:35:22 by jprofit           #+#    #+#             */
/*   Updated: 2022/11/09 14:04:24 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		size;
	char	*str;
	char	*temp;

	size = ft_strlen(s);
	str = (char *)s;
	temp = NULL;
	while (size-- + 1)
	{
		if (*str == (char)c)
			temp = str;
		str++;
	}
	return (temp);
}
