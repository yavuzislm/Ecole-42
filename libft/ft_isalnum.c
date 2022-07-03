/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yislam <yislam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:48:06 by yislam            #+#    #+#             */
/*   Updated: 2022/06/20 13:56:23 by yislam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int x)
{
	if ((x >= 'a' && x <= 'z')
		|| (x >= 'A' && x <= 'Z')
		|| (x >= '0' && x <= '9'))
		return (1);
	return (0);
}

/*
int	main(void)
{
	char	a;
	char	z;
	char	ba;
	char	bz;
	char	sayi;

	a = 'a';
	z = 'z';
	ba = 'A';
	bz = 'Z';
	sayi = 42;
	printf("|%c| = %d\n", a, ft_isdigit(a));
	printf("|%c| = %d\n", z, ft_isdigit(z));
	printf("|%c| = %d\n", ba, ft_isdigit(ba));
	printf("|%c| = %d\n", bz, ft_isdigit(bz));
	printf("|%c| = %d\n", sayi, ft_isdigit(sayi));
}
*/