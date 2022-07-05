/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yislam <yislam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 14:23:32 by yislam            #+#    #+#             */
/*   Updated: 2022/07/06 00:52:59 by yislam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointprt(unsigned long x)
{
	int	i;

	i = 1;
	ft_putchar('0');
	ft_putchar('x');
	ft_dtoh(x);
	while (x >= 16 && i++)
		x /= 16;
	return (i + 2);
}

int	ft_hexax(unsigned long x, char y)
{
	char	*a;
	int		len;

	if (y == 'x')
		len = ft_dtoh(x);

	else
	{
		len = 0;
		a = ft_strdup("0123456789ABCDEF");
		if (x >= 16)
		{
			len += ft_hexax(x / 16, y);
			len += ft_hexax(x % 16, y);
		}
		else
			len += ft_putchar(a[x]);
		free(a);
	}
	return (len);
}

int	v_check(va_list p, int x)
{
	int		len;
	char	*a;

	len = 0;
	if (x == 'c')
		len += ft_putchar(va_arg(p, int));
	if (x == 's')
		len += ft_putstring(va_arg(p, char *));
	if (x == 'p')
		len += ft_pointprt(va_arg(p, unsigned long));
	if (x == 'd' || x == 'i')
	{
		a = ft_itoa(va_arg(p, int));
		len += ft_putstring(a);
		free(a);
	}
	if (x == 'u')
		len += ft_uitoa(va_arg(p, unsigned int));
	if (x == 'x' || x == 'X')
		len += ft_hexax(va_arg(p, unsigned long), x);
	if (x == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const	char *str, ...)
{
	int		i;
	int		len;
	va_list	p;

	va_start(p, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += v_check(p, str[i]);
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			len++;
		}
		i++;
	}
	va_end(p);
	return (len);
}
/*
int	main(void)
{
	char x = 'a';
	const char *yavuz = "yavuztalhaislam";
	int	y = -12312;
	ft_printf("%c", x);
	write(1,"\n",2);
	ft_printf("%s",yavuz);
	write(1,"\n",2);
	ft_printf("%d",y);
	write(1,"\n",2);
	ft_printf("%%");
	write(1,"\n",2);
	unsigned int maxui = 4294967294;
	ft_printf("%u",maxui);
	write(1,"\n",2);
	ft_printf("%p",13231313131);
}*/