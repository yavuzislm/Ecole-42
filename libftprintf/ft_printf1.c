/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yislam <yislam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:23:59 by yislam            #+#    #+#             */
/*   Updated: 2022/07/06 01:03:02 by yislam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char x)
{
	write(1, &x, 1);
	return (1);
}

int	ft_putstring(char *str)
{
	if (!str)
		return (ft_putstring("(null)"));
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	ft_decimal(unsigned int nbr)
{
	int	nbr_len;

	nbr_len = 0;
	if (nbr <= 0)
		nbr_len++;
	while (nbr)
	{
		nbr /= 10;
		nbr_len++;
	}
	return (nbr_len);
}

int	ft_uitoa(unsigned int n)
{
	char	*str;
	int		digit;
	int		len;

	len = 0;
	digit = ft_decimal(n);
	str = (char *) ft_calloc(digit + 1, sizeof(char));
	if (!str)
		return (0);
	if (n == 0)
		*str = '0';
	while (n != 0)
	{
		*(str + --digit) = (n % 10) + '0';
		n = n / 10;
	}
	len = ft_putstring(str);
	free(str);
	return (len);
}

int	ft_dtoh(unsigned long x)
{
	char	*hexa;
	int		len;

	len = 0;
	hexa = ft_strdup("0123456789abcdef");
	if (x >= 16)
	{
		len += ft_dtoh(x / 16);
		len += ft_dtoh(x % 16);
	}
	else
		len += ft_putchar(hexa[x]);
	free(hexa);
	return (len);
}
