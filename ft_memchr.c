/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 16:51:46 by dskrypny          #+#    #+#             */
/*   Updated: 2017/11/18 14:24:38 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*str;
	unsigned char		*res;
	size_t				i;

	i = 0;
	str = (unsigned const char *)s;
	res = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == c)
			return (res + i);
		i++;
	}
	return (NULL);
}
