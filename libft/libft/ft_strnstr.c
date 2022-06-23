/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yislam <yislam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 13:52:02 by yislam            #+#    #+#             */
/*   Updated: 2022/06/22 15:13:12 by yislam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	a;

	if (!haystack || !needle)
		return (NULL);
	i = 0;
	if (!needle || !needle[0])
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		a = 0;
		while (haystack [i + a] == needle [a]
			&& haystack [i + a] && needle [a] && i + a < len)
			a++;
		if (!needle[a])
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	char *yavuz = "yavuz talha islam";
	char *talha = "talha";

	printf("%s",ft_strnstr(yavuz,talha,14));
}
*/

/*
özel durum 
if (!needle || !needle[0])
		return ((char *)haystack);
*/