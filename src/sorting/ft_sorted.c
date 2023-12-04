/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 23:25:43 by osg               #+#    #+#             */
/*   Updated: 2023/12/04 10:53:41 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_sorted(t_stack *stack_a)
{
	int	i;

	i = stack_a->num;
	while (stack_a)
	{
		if (i > stack_a->num)
			return (0);
		i = stack_a->num;
		stack_a = stack_a->next;
	}
	return (1);
}
