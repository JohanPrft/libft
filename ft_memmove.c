/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:40:40 by jprofit           #+#    #+#             */
/*   Updated: 2022/11/15 14:06:41 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
memmove() is used to copy from an overlapping source and destination area (say
moving an array's contents around within itself or something similiar - hence
the move mnemonic). It uses strategies (such as possibly copying data starting
at the back instead of the front) to protect against problems caused by
overlappingregions. It also may be slightly less efficient as there usually
isn't much hardwarehelp copying data from back to front.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*(char *)dst = *(char *)src;
		dst++;
		src++;
		i++;
	}
	return (dst);
}
