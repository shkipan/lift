/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 14:05:36 by dskrypny          #+#    #+#             */
/*   Updated: 2017/11/19 17:28:14 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*temp;

	while ((*alst))
	{
		temp = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free((*alst));
		*alst = NULL;
		(*alst) = temp;
	}
}
