/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strequ.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 21:58:08 by dskrypny          #+#    #+#             */
/*   Updated: 2017/11/18 14:29:38 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t i;

	if (s1 == NULL || s2 == NULL)
	{
		if (s1 == NULL && s2 == NULL)
			return (1);
		return (0);
	}
	i = 0;
	while (s1[i] && s2[i] == s1[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i] == 0 ? 1 : 0);
}
