/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yislam <yislam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:16:15 by yislam            #+#    #+#             */
/*   Updated: 2022/06/23 11:20:47 by yislam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t z)
{
	ft_memset(dest, '\0', z);
}

/*
int	main(void)
{
	char	yavuz[] = "yavuztalhaislam";
	printf("%s\n",yavuz);
	ft_bzero(yavuz,8);
	printf("%s\n",yavuz);
	printf("%s\n",yavuz+8);
}
*/
