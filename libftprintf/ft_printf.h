/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yislam <yislam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 14:24:39 by yislam            #+#    #+#             */
/*   Updated: 2022/07/06 03:14:53 by yislam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const	char *str, ...);
int		ft_putchar(char x);
int		ft_putstring(char *str);
int		ft_uitoa(unsigned int n);
int		ft_decimal(unsigned int nbr);
int		ft_dtoh(unsigned long x);
int		ft_pointprt(unsigned long x);
#endif