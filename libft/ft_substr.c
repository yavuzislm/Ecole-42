/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yislam <yislam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:31:51 by yislam            #+#    #+#             */
/*   Updated: 2022/07/03 17:28:05 by yislam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*final;

	if (s)
	{		
		if (start >= ft_strlen(s) || len == 0 || ft_strlen(s) == 0)
			return (ft_strdup(""));
		i = 0;
		while (i < len && s[i + start] != '\0')
			i++;
		final = (char *) malloc((sizeof(char) * i) + 1);
		if (!(final))
			return (NULL);
		j = 0;
		while (j < i)
		{
			final[j] = s[start + j];
			j++;
		}
		final[j] = '\0';
		return (final);
	}
	return (NULL);
}

/*
int main()
{
    char    a[] = "abcdef";
    printf("%s", ft_substr(a, 2, 7));
}
*/