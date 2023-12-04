/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_and_push.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:10:24 by oseivane          #+#    #+#             */
/*   Updated: 2023/12/04 11:37:34 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//Esta funcion rota stack a y b
//en la misma direccion cuanto se requiera.
int	ft_apply_rarb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->num != c && ft_find_place_b(*b, c) > 0)
			ft_op_rr(a, b, 0);
		while ((*a)->num != c)
			ft_op_ra(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			ft_op_rb(b, 0);
		ft_op_pb(a, b, 0);
	}
	else
	{
		while ((*b)->num != c && ft_find_place_a(*a, c) > 0)
			ft_op_rr(a, b, 0);
		while ((*b)->num != c)
			ft_op_rb(b, 0);
		while (ft_find_place_a(*a, c) > 0)
			ft_op_ra(a, 0);
		ft_op_pa(a, b, 0);
	}
	return (-1);
}

//Esta funcion rota stack a y b
//en la misma direccion reversa cuanto se requiera.

int	ft_apply_rrarrb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->num != c && ft_find_place_b(*b, c) > 0)
			ft_op_rrr(a, b, 0);
		while ((*a)->num != c)
			ft_op_rra(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			ft_op_rrb(b, 0);
		ft_op_pb(a, b, 0);
	}
	else
	{
		while ((*b)->num != c && ft_find_place_a(*a, c) > 0)
			ft_op_rrr(a, b, 0);
		while ((*b)->num != c)
			ft_op_rrb(b, 0);
		while (ft_find_place_a(*a, c) > 0)
			ft_op_rra(a, 0);
		ft_op_pa(a, b, 0);
	}
	return (-1);
}

//Esta funcion rota A en reverso,
//el B en direeccion opuesta de A, 

int	ft_apply_rrarb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->num != c)
			ft_op_rra(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			ft_op_rb(b, 0);
		ft_op_pb(a, b, 0);
	}
	else
	{
		while (ft_find_place_a(*a, c) > 0)
			ft_op_rra(a, 0);
		while ((*b)->num != c)
			ft_op_rb(b, 0);
		ft_op_pa(a, b, 0);
	}
	return (-1);
}

//Esta funcion rota stack b en direccion reversa
//el stack a direccion opuesta.

int	ft_apply_rarrb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->num != c)
			ft_op_ra(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			ft_op_rrb(b, 0);
		ft_op_pb(a, b, 0);
	}
	else
	{
		while (ft_find_place_a(*a, c) > 0)
			ft_op_ra(a, 0);
		while ((*b)->num != c)
			ft_op_rrb(b, 0);
		ft_op_pa(a, b, 0);
	}
	return (-1);
}
