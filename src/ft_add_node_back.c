/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_node_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osg <osg@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:12:31 by oseivane          #+#    #+#             */
/*   Updated: 2023/06/23 17:27:57 by osg              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_add_node_back(t_stack **lst, t_stack *new)
{
	t_stack	*tmp;

	if (lst != NULL)
	{
		if ((*lst) == NULL)
		{
			*lst = new;
			new->prev = NULL;
		}
		else
		{
			tmp = ft_last_node(*lst);
			tmp->next = new;
			tmp->next->prev = tmp;
		}
	}
}
