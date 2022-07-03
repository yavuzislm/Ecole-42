/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yislam <yislam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:05:28 by yislam            #+#    #+#             */
/*   Updated: 2022/06/20 15:53:08 by yislam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int x)
{
	if (x >= '0' && x <= '9')
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	a;
	char	b;
	char	x;
	char	y;
	char	z;

	a = '9';
	b = '6';
	x = 'a';
	y = 'q';
	z = '!';
	printf("%d\n", ft_isdigit(a));
	printf("%d\n", ft_isdigit(b));
	printf("%d\n", ft_isdigit(x));
	printf("%d\n", ft_isdigit(y));
	printf("%d\n", ft_isdigit(z));
}
*/