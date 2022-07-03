/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yislam <yislam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:56:30 by yislam            #+#    #+#             */
/*   Updated: 2022/06/30 14:29:12 by yislam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c <= 127 && c >= 0);
}

/*
int	main(void)
{
	unsigned char	a = 250;
	char	b = 2;
	char	c = -1;

	printf("%d\n",ft_isisascii(a));
	printf("%d\n",ft_isisascii(b));
	printf("%d\n",ft_isisascii(c));
}
*/
