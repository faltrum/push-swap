/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:32:29 by oseivane          #+#    #+#             */
/*   Updated: 2023/10/30 14:08:32 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_op_ra(t_stack **a, int j)
{
	t_stack	*tmp;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	*a = ft_last_node(*a);
	(*a)->next = tmp;
	*a = tmp->next;
	tmp->next = NULL;
	if (j == 0)
		write (1, "ra\n", 3);
}

void	ft_op_rb(t_stack **b, int j)
{
	t_stack	*tmp;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	*b = ft_last_node(*b);
	(*b)->next = tmp;
	*b = tmp->next;
	tmp->next = NULL;
	if (j == 0)
		write (1, "rb\n", 3);
}

//revisar si se puede refactorizar el codigo
void	ft_op_rr(t_stack **a, t_stack **b, int j)
{
	t_stack	*tmp;

	if (!*a || !((*a)->next) || !*b || !((*b)->next))
		return ;
	tmp = *a;
	*a = ft_last_node(*a);
	(*a)->next = tmp;
	*a = tmp->next;
	tmp->next = NULL;
	tmp = *b;
	*b = ft_last_node(*b);
	(*b)->next = tmp;
	*b = tmp->next;
	tmp->next = NULL;
	if (j == 0)
		write (1, "rr\n", 3);
}
