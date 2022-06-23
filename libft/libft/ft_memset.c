/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yislam <yislam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:10:33 by yislam            #+#    #+#             */
/*   Updated: 2022/06/23 11:04:32 by yislam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int x, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)dest + i) = (unsigned char)x;
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	yavuz[] = "yavuztalhaislam";
	char a = 'd';
	
	printf("%s\n",yavuz);
	printf("%s\n",ft_memset(yavuz,a,5));
}
*/
