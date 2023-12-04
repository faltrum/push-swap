/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 06:03:49 by osg               #+#    #+#             */
/*   Updated: 2023/12/04 14:24:56 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*ft_subprocess(char **argv)
{
	t_stack	*a;
	char	**tmp;
	int		i;
	int		j;

	a = NULL;
	i = 0;
	tmp = ft_split(argv[1], ' ');
	ft_check_error2(tmp);
	while (tmp[i])
	{
		j = ft_atoi(tmp[i]);
		ft_add_node_back(&a, ft_new_node(j));
		i++;
	}
	ft_freestr(tmp);
	free(tmp);
	return (a);
}

t_stack	*ft_process(int argc, char **argv)
{
	t_stack	*a;
	int		i;
	int		j;

	a = NULL;
	i = 1;
	if (argc < 2)
		ft_error();
	else if (argc == 2)
		a = ft_subprocess(argv);
	else
	{
		while (i < argc)
		{
			ft_check_error(argv);
			j = ft_atoi(argv[i]);
			ft_add_node_back(&a, ft_new_node(j));
			i++;
		}
	}
	return (a);
}
