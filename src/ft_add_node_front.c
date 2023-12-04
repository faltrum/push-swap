/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_node_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osg <osg@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:41:38 by oseivane          #+#    #+#             */
/*   Updated: 2023/07/13 00:03:58 by osg              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_add_node_front(t_stack **lst, t_stack *new)
{
	if (new && *lst)
	{
		new->next = *lst;
		new->prev = (*lst)->prev;
		(*lst)->prev->next = new;
		*lst = new;
		(*lst)->next->prev = *lst;
	}
	else if (!*lst)
	{
		*lst = new;
		(*lst)->prev = *lst;
		(*lst)->next = *lst;
	}
}
