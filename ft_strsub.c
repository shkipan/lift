/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 18:46:23 by dskrypny          #+#    #+#             */
/*   Updated: 2017/11/18 14:33:30 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	if (s == NULL)
		return (NULL);
	i = 0;
	res = (char *)malloc(sizeof(char) * (len + 1));
	while (s[i] && i < len)
	{
		res[i] = s[i + start];
		i++;
	}
	return (res);
}
