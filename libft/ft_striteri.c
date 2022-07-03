/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yislam <yislam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 13:59:21 by yislam            #+#    #+#             */
/*   Updated: 2022/06/28 14:21:04 by yislam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
void	ft_ft(unsigned int g, char *b)
{
	*b = *b + g;
}

int	main()
{
	char	a[] = "yvauz";
	int	i;

	i = 0;
	while (a[i])
	{
		printf("%c",a[i]);
		i++;
	}
	ft_striteri(a, &ft_ft);
	while (a[i])
	{
		printf("%p\n",&a);
		i++;
	}
	printf("%s", a);
}
*/