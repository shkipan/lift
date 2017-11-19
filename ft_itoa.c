/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 18:51:52 by dskrypny          #+#    #+#             */
/*   Updated: 2017/11/19 17:26:01 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	char	*res;
	int		ex;
	int		i;

	i = 0;
	ex = 1;
	res = (char *)malloc(sizeof(char) * 12);
	if (n < 0)
	{
		res[i] = '-';
		i++;
		n = -n;
	}
	while (n / ex > 9)
		ex *= 10;
	while (ex >= 1)
	{
		res[i] = '0' + n / ex;
		n = n % ex;
		ex /= 10;
		i++;
	}
	res[i] = '\0';
	return (res);
}
