/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 20:51:36 by dskrypny          #+#    #+#             */
/*   Updated: 2017/11/18 14:30:16 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*res;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return ((char *)s2);
	if (s2 == NULL)
		return ((char *)s1);
	i = -1;
	res = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (res)
	{
		while (s1[++i])
			res[i] = s1[i];
		j = i;
		i = -1;
		while (s2[++i])
			res[j + i] = s2[i];
		res[j + i] = 0;
	}
	return (res);
}
