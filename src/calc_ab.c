/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:57:17 by oseivane          #+#    #+#             */
/*   Updated: 2023/11/23 14:06:04 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Esta funcion calcula cuantas veces
// rotariamos los stacks juntos.
// Ya que , despues de un numero de rots,
// Solo lo haremos con un stack.
int	ft_case_rarb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = ft_find_place_b(b, c);
	if (i < ft_find_index(a, c))
		i = ft_find_index(a, c);
	return (i);
}

//Esta funcion calcula rots juntos.
//Despues de un numero, l hara solo con uno
// diferentes checks en reverse rotate dado
//un indice del numero en cuestion.
//Se calcula a trav'es del list-size - index number.

int	ft_case_rrarrb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_b(b, c))
		i = ft_stack_l(b) - ft_find_place_b(b, c);
	if ((i < (ft_stack_l(a) - ft_find_index(a, c))) && ft_find_index(a, c))
		i = ft_stack_l(a) - ft_find_index(a, c);
	return (i);
}
// HAce calculos similares.
// mismos claculos para rra+rb.

int	ft_case_rrarb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(a, c))
		i = ft_stack_l(a) - ft_find_index(a, c);
	i = ft_find_place_b(b, c) + i;
	return (i);
}

int	ft_case_rarrb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_b(b, c))
		i = ft_stack_l(b) - ft_find_place_b(b, c);
	i = ft_find_index(a, c) + i;
	return (i);
}
