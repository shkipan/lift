/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 21:57:45 by dskrypny          #+#    #+#             */
/*   Updated: 2017/11/18 14:40:10 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_cut(char *res, char *res1)
{
	int	i;

	i = -1;
	while (res[++i])
		res1[i] = res[i];
	res1[i] = 0;
	free(res);
	return (res1);
}

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		j;
	char	*res;
	char	*res1;

	i = 0;
	j = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	res = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return (NULL);
	while (s[i])
	{
		if (f(i, s[i]) != 0)
			res[j++] = f(i, s[i]);
		i++;
	}
	res[j] = 0;
	res1 = (char *)malloc(sizeof(char) * j);
	res1 = ft_cut(res, res1);
	return (res1);
}
