/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:03:55 by oseivane          #+#    #+#             */
/*   Updated: 2023/12/04 13:35:32 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*last;

	a = ft_process(argc, argv);
	last = ft_last_node(a);
	a->prev = last;
	last->next = a;
	if (!ft_sorted(a))
	{
		ft_sort_stack(&a);
	}
	ft_free(&a);
	return (0);
}
