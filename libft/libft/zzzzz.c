/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zzzzz.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yislam <yislam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:19:21 by yislam            #+#    #+#             */
/*   Updated: 2022/06/23 15:35:12 by yislam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checker(char *s1, int i)
{
	size_t	j;

	while (!(s1 + i) || 0 <= i)
	{
		j = 0;
		if (!i)
		{
			while (!s2)
			{
				if (s1[i] != s2 [i])
					return (i);
				j ++;
			}
			i++;
		}
		else
		{
			while (!s2)
			{
				if (s1[i] != s2 [i])
					return (i);
				j++;
			}
			i--;
		}
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	a;
	size_t	b;
	size_t	len;

	len = ft_strlen(s1);
	a = checker(s1,0);
	b = checker(s2,len);
}