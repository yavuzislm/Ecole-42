/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yislam <yislam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 13:03:52 by yislam            #+#    #+#             */
/*   Updated: 2022/07/03 16:27:36 by yislam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*yavuz = "yavuztalhaislam";
	char	*yavuz1 = "yavuzislam";
	char 	a;
	char 	b;

	a = 't';
	b = 'i';
	printf("%d\n",ft_memcmp(yavuz, yavuz1, 14));
	printf("%d\n", a - b);
}
*/