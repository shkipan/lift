/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 12:50:21 by dskrypny          #+#    #+#             */
/*   Updated: 2017/11/18 15:05:53 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_cut(char *s)
{
	int i;

	i = 0;
	while (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
		i++;
	s[i] = 0;
	return (s);
}

char			*ft_strtrim(char const *s)
{
	char	*res;
	char	*res1;
	int		i;
	int		begin;

	if (s == NULL)
		return (NULL);
	if (!(res = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	begin = i;
	i--;
	while (s[i++])
		res[i - begin] = s[i];
	i -= 2;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i--;
	if (!(res1 = (char *)malloc(sizeof(char) * (i - begin + 1))))
		return (NULL);
	res1 = ft_cut(res);
	free(res);
	return (res1);
}
