/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:11:54 by oseivane          #+#    #+#             */
/*   Updated: 2023/12/04 13:55:36 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_check_isrep(char **strarg)
{
	int	i;
	int	j;

	i = 0;
	while (strarg[i])
	{
		j = i + 1;
		while (strarg[j])
		{
			if (!ft_strcmp(strarg[i], strarg[j]))
				ft_error();
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_check_isalpha(char *strarg)
{
	int		i;

	i = 0;
	while (strarg[i])
	{
		if ((strarg[i] >= 'A' && strarg[i] <= 'Z')
			|| (strarg[i] >= 'a' && strarg[i] <= 'z'))
		{
			ft_error();
			return (1);
		}
		i++;
	}
	return (strarg[i]);
}

int	ft_check_error(char **strarg)
{
	int		i;

	i = 1;
	while (strarg[i])
	{
		ft_check_isalpha(strarg[i]);
		ft_check_isrep(&strarg[i]);
		if (ft_strlen(strarg[i]) != ft_strlen(ft_itoa(ft_atoi(strarg[i]))))
			ft_error();
		i++;
	}
	return (0);
}

int	ft_check_error2(char **strarg)
{
	int		i;

	i = 0;
	while (strarg[i])
	{
		ft_check_isalpha(strarg[i]);
		ft_check_isrep(&strarg[i]);
		if (ft_strlen(strarg[i]) != ft_strlen(ft_itoa(ft_atoi(strarg[i]))))
			ft_error();
		i++;
	}
	return (0);
}
