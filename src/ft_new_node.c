/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osg <osg@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:44:37 by oseivane          #+#    #+#             */
/*   Updated: 2023/07/11 06:33:59 by osg              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*ft_new_node(int num)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		ft_error();
	node->num = num;
	node->next = NULL;
	return (node);
}
