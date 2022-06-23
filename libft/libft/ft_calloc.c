/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yislam <yislam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:25:30 by yislam            #+#    #+#             */
/*   Updated: 2022/06/23 11:18:10 by yislam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ps;

	ps = malloc(size * count);
	if (ps == 0)
		return (0);
	ft_bzero(ps, (size * count));
	return (ps);
}

int	main(void)
{
	char	*x;

	x = ft_calloc(5, sizeof(char));
	printf("%s",x);
}