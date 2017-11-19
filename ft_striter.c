/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 21:49:02 by dskrypny          #+#    #+#             */
/*   Updated: 2017/11/18 14:29:55 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	if (s == NULL || f == NULL)
		return ;
	while (*s)
		f(s++);
}
