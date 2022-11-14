/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:54:59 by jprofit           #+#    #+#             */
/*   Updated: 2022/11/14 16:39:33 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
// {
// 	f(15, 'c')
// }

// ft_strmapi("ff", malloc)

int	addint(int a, int b)
{
	return (a+b);
}

int	main(void)
{
	int	(*functionptr)(int, int);
	
}
