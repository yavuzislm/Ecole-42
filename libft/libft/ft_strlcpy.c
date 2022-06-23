/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yislam <yislam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 09:40:08 by yislam            #+#    #+#             */
/*   Updated: 2022/06/22 18:14:59 by yislam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	length;

	i = 0;
	length = 0;
	if (n > 0)
	{
		while (src && i < (n - 1))
		{
			dest [i] = src[i];
			i++;
		}
		dest [i] = '\0';
	}
	while (src[length])
		length++;
	return (length);
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