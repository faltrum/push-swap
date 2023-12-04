/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:56:18 by oseivane          #+#    #+#             */
/*   Updated: 2023/12/04 10:50:09 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_3(t_stack **stack_a)
{
	if (ft_min(*stack_a) == (*stack_a)->num)
	{
		ft_op_rra(stack_a, 0);
		ft_op_sa(stack_a, 0);
	}
	else if (ft_max(*stack_a) == (*stack_a)->num)
	{
		ft_op_ra(stack_a, 0);
		if (!ft_sorted(*stack_a))
			ft_op_sa(stack_a, 0);
	}
	else
	{
		if (ft_find_index(*stack_a, ft_max(*stack_a)) == 1)
			ft_op_rra(stack_a, 0);
		else
			ft_op_sa(stack_a, 0);
	}
}
