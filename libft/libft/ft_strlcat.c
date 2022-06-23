/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yislam <yislam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:29:37 by yislam            #+#    #+#             */
/*   Updated: 2022/06/22 18:23:41 by yislam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	a;
	size_t	sizedst;
	size_t	sizesrc;

	sizedst = ft_strlen(dst);
	sizesrc = ft_strlen(src);
	a = ft_strlen(dst);
	if (dstsize <= sizedst)
		return (dstsize + sizesrc);
	i = 0;
	while (src[i] != '\0' && a < dstsize - 1)
	{
		dst[a] = src[i];
		a++;
		i++;
	}
	dst[a] = '\0';
	return (sizedst + sizesrc);
}

/* özel durum olduğu için böyle kullanmışım. (dstsize <= sizedst) 
den bahsediyorum.*/

/*

int	main(void)
{
	char	kelime[] = "yavuz";
	char	kelime2[] = "islam";

	printf("%lu\n",ft_strlcat(kelime,kelime2,3));
	printf("%lu\n",ft_strlcat(kelime,kelime2,7));
	printf("%lu\n",ft_strlcat(kelime,kelime2,8));
}
*/

/* strlcat kullanımı:
strlcat(dest,src,sayi);
şeklinde yazılır buradaki sayı dediğimiz toplam uzunluğu verir.
yani toplam uzunluk derken şundan bahsediyorum dest+src yapacak
buradaki src ve dstnin uzunluğunu verir. hemde oradaki sayi dst 
nin uzunluğundan kısa olursa o zaman bizim yazdığımız fonksiyon
özel duruma giriyor.
*/