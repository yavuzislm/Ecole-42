/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yislam <yislam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:30:50 by yislam            #+#    #+#             */
/*   Updated: 2022/06/23 11:30:05 by yislam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	p = malloc(sizeof(char) * len + 1);
	if (!p)
		return (0);
	i = 0;
	while (len > i)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

/*
int	main(void)
{
	const char *sabit = "yavuztalhaislam";
	
	printf("%s", ft_strdup(sabit));
}
*/