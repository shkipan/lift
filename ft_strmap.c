/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 21:57:10 by dskrypny          #+#    #+#             */
/*   Updated: 2017/11/18 14:31:00 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		j;
	char	*res;
	char	*res1;

	i = 0;
	j = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	res = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return (NULL);
	while (s[i])
	{
		if (f(s[i]) != 0)
			res[j++] = f(s[i]);
		i++;
	}
	res[j] = 0;
	i = -1;
	res1 = (char *)malloc(sizeof(char) * j);
	while (res[++i])
		res1[i] = res[i];
	res1[i] = 0;
	return (res1);
}
