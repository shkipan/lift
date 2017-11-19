/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 11:32:02 by dskrypny          #+#    #+#             */
/*   Updated: 2017/11/18 14:30:30 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = 0;
	while (dst[i] && i < dstsize - 1)
		i++;
	if (dst[i] != 0)
		return (dstsize + ft_strlen(src));
	else
	{
		j = 0;
		while (src[j] && i + j < dstsize - 1)
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = 0;
		while (src[j])
			j++;
	}
	return (i + j);
}
