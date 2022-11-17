/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:46:40 by jprofit           #+#    #+#             */
/*   Updated: 2022/11/16 12:36:11 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenint(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	inttochar(char *res, unsigned	int n, unsigned	int len)
{
	res[len] = '\0';
	len--;
	while (n > 0)
	{
		res[len] = n % 10 + '0';
		n /= 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*res;

	if (n == -2147483648)
		return ("-2147483648");
	if (n == 0)
		return ("0");
	len = lenint(n);
	if (n < 0)
	{
		res = ft_calloc(len + 2, sizeof(*res));
		n *= -1;
		res[0] = '-';
		inttochar(res, n, len);
	}
	else
	{
		res = ft_calloc(len + 1, sizeof(*res));
		inttochar(res, n, len);
	}
	return (res);
}
