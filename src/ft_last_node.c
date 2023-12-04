/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osg <osg@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:16:15 by oseivane          #+#    #+#             */
/*   Updated: 2023/06/23 17:27:52 by osg              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*ft_last_node(t_stack *node)
{
	t_stack	*temp;

	temp = node;
	if (!node)
		return (NULL);
	while (temp->next)
		temp = temp->next;
	return (temp);
}
