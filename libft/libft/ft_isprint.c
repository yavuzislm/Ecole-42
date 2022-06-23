/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yislam <yislam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:09:27 by yislam            #+#    #+#             */
/*   Updated: 2022/06/20 16:16:21 by yislam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int x)
{
	if (x >= 32 && x <= 126)
		return (1);
	return (0);
}

/*
int	main(void)
{
	char a = 127;
	char b = 32;
	char c = 31;
	char d = 126;
	char e = 61;

	printf("%d \n",ft_isprint(a));
	printf("%d \n",ft_isprint(b)); 
	printf("%d\n",ft_isprint(c)); 
	printf("%d\n",ft_isprint(d)); 
	printf("%d\n",ft_isprint(e)); 
}
*/
