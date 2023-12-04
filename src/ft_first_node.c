/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osg <osg@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:47:08 by oseivane          #+#    #+#             */
/*   Updated: 2023/06/23 17:27:53 by osg              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*ft_first_node(t_stack *node)
{
	t_stack	*temp;

	temp = node;
	if (!node)
		return (NULL);
	while (temp->prev)
		temp = temp->prev;
	return (temp);
}
