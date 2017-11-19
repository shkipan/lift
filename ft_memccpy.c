/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 21:35:37 by dskrypny          #+#    #+#             */
/*   Updated: 2017/11/19 17:43:37 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned const char	*str;
	unsigned char		*dest;
	unsigned char		sym;

	i = 0;
	dest = (unsigned char *)dst;
	str = (unsigned const char *)src;
	sym = (unsigned char)c;
	while (i < n && str[i - 1] != sym)
	{
		dest[i] = str[i];
		i++;
	}
	return (dst);
}
