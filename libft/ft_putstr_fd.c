/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yislam <yislam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:13:41 by yislam            #+#    #+#             */
/*   Updated: 2022/06/28 15:35:44 by yislam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

/*
#include <fcntl.h>
int	main()
{
	int	a = open("abc.txt",O_WRONLY);	
	printf("%d\n", a);
	ft_putstr_fd("asahkjdh", a);
}
*/