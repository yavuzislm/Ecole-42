/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yislam <yislam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 09:40:08 by yislam            #+#    #+#             */
/*   Updated: 2022/06/30 14:30:21 by yislam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}
/* 
Bu fonksiyonda verdiğin n değeri kadarı kopyalanıyor sonrasında 
gösterdiği değer ise kopyalanacak olan 
değişkenin uzunluğunu vermek unutma sonunda \0 koyduğumuz için -1 var.
*/

/*
int	main(void)
{
	char string1[] = "hello there, Venus";
	char buffer1[19];
	size_t x;
	
	x = ft_strlcpy(buffer1,string1,10);
	printf("%lu \n",x);
	printf("%s",buffer1);

	
}
*/