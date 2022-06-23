/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yislam <yislam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:40:31 by yislam            #+#    #+#             */
/*   Updated: 2022/06/22 18:03:04 by yislam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == src || !n)
		return (dst);
	i = 0;
	while (i < n)
	{
		*((char *)dst + i) = *((char *)src + i);
		i++;
	}
	return (dst);
}

/*
int	main( void )
{
	const char	*cp = "Bilgisayar&Programlama";
	char	dest [40];

    ft_memset(dest, '\0', 40);
    ft_memcpy(dest, cp, 40);
    printf("%s\n", dest);
	
    return 0;
}
*/