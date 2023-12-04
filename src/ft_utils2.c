/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osg <osg@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:38:45 by oseivane          #+#    #+#             */
/*   Updated: 2023/10/31 17:59:42 by osg              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Esta funcion encuentra el indice de un numero del stack
int	ft_find_index(t_stack *a, int num)
{
	int	i;

	i = 0;
	while (a->num != num)
	{
		i++;
		a = a->next;
	}
	a->ind = 0;
	return (i);
}

//Busca el lugar correcto para el numero que pusheamos a b
int	ft_find_place_b(t_stack *b, int num_p)
{
	int		i;
	t_stack	*tmp;

	i = 1;
	if (num_p > b->num && num_p < ft_last_node(b)->num)
		i = 0;
	else if (num_p > ft_max(b) || num_p < ft_min(b))
		i = ft_find_index(b, ft_max(b));
	else
	{
		tmp = b->next;
		while (b->num < num_p || tmp->num > num_p)
		{
			b = b->next;
			tmp = b->next;
			i++;
		}
	}
	return (i);
}

int	ft_find_place_a(t_stack *a, int num_p)
{
	int		i;
	t_stack	*tmp;

	i = 1;
	if (num_p < a->num && num_p > ft_last_node(a)->num)
		i = 0;
	else if (num_p > ft_max(a) || num_p < ft_min(a))
		i = ft_find_index(a, ft_min(a));
	else
	{
		tmp = a->next;
		while (a->num > num_p || tmp->num < num_p)
		{
			a = a->next;
			tmp = a->next;
			i++;
		}
	}
	return (i);
}
