/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 16:09:16 by dskrypny          #+#    #+#             */
/*   Updated: 2017/11/20 16:54:30 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *temp;
	t_list *temp1;

	if (f == NULL || lst == NULL)
		return (NULL);
	if (!(temp = malloc(sizeof(t_list))))
		return (NULL);
	temp = NULL;
	temp1 = tenp;
	while (lst)
	{
		if (f(lst) != NULL)
		{
			if (!(temp1 = malloc(sizeof(t_list))))
				return (NULL);
			temp1 = f(lst);
			temp1 = temp1->next;
		}
		lst = lst->next;
	}

	return (temp);

