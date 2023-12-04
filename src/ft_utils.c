/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:59:17 by oseivane          #+#    #+#             */
/*   Updated: 2023/11/23 11:45:16 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Calcula la longitud del stack, importante 
// lo grande que es.
int	ft_stack_l(t_stack *stack)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = stack;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
		if (tmp == stack)
			break ;
	}
	return (i);
}

//Busca el numero mas pequeno del stack
int	ft_min(t_stack *a)
{
	int	i;

	i = a->num;
	while (a)
	{
		if (a->num < i)
			i = a->num;
		a = a->next;
	}
	return (i);
}

//Busca el numero mas grande del stack
int	ft_max(t_stack *a)
{
	int	i;

	i = a->num;
	while (a)
	{
		if (a->num > i)
			i = a->num;
		a = a->next;
	}
	return (i);
}
