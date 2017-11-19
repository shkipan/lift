/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 20:00:20 by dskrypny          #+#    #+#             */
/*   Updated: 2017/11/19 16:56:53 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *elem;

	elem = malloc(sizeof(t_list));
	if (elem != NULL)
	{
		if (content != NULL)
		{
			elem->content = (void *)content;
			elem->content_size = content_size;
		}
		else
		{
			elem->content = NULL;
			elem->content_size = 0;
		}
		elem->next = NULL;
	}
	else
		return (NULL);
	return (elem);
}
