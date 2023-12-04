/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:16:37 by oseivane          #+#    #+#             */
/*   Updated: 2023/12/04 12:40:18 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//Funcion que calcula y decide que rotacion es la mejor
//para usar, siempre hay un push despues de larotacion.
//Funcion utilizada del push B al A.
int	ft_rotate_type_ba(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = b;
	i = ft_case_rrarrb_a(a, b, b->num);
	while (tmp)
	{
		if (i > ft_case_rarb_a(a, b, b->num))
			i = ft_case_rarb_a(a, b, tmp->num);
		if (i > ft_case_rrarrb_a(a, b, tmp->num))
			i = ft_case_rrarrb_a(a, b, tmp->num);
		if (i > ft_case_rarrb_a(a, b, tmp->num))
			i = ft_case_rarrb_a(a, b, tmp->num);
		if (i > ft_case_rrarrb_a(a, b, tmp->num))
			i = ft_case_rrarrb_a(a, b, tmp->num);
		tmp = tmp->next;
	}
	return (i);
}

//Funcion que calcula y decide que rotacion es la mejor
//para usar, siempre hay un push despues de larotacion.
//Funcion utilizada del push A al B.

int	ft_rotate_type_ab(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = a;
	i = ft_case_rrarrb(a, b, a->num);
	while (tmp)
	{
		if (i > ft_case_rarb(a, b, b->num))
			i = ft_case_rarb(a, b, tmp->num);
		if (i > ft_case_rrarrb(a, b, tmp->num))
			i = ft_case_rrarrb(a, b, tmp->num);
		if (i > ft_case_rarrb(a, b, tmp->num))
			i = ft_case_rarrb(a, b, tmp->num);
		if (i > ft_case_rrarrb(a, b, tmp->num))
			i = ft_case_rrarrb(a, b, tmp->num);
		tmp = tmp->next;
	}
	return (i);
}
