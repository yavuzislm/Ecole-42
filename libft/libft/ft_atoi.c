/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yislam <yislam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:36:14 by yislam            #+#    #+#             */
/*   Updated: 2022/06/22 14:31:01 by yislam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	c;
	int	last;

	last = 0;
	i = 0;
	c = 1;
	while (str [i] == 32 || (str[i] >= 9 && str [i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str [i] == '-')
			c *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
			last = (str[i] - 48) + (last * 10);
		i++;
	}
	return (last * c);
}
/*
#include <stdio.h>
int	main()
{
	char yavuz [] = "     -----++3452sybsdh";
	printf("%d",ft_atoi(yavuz));
}*/