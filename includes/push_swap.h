/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osg <osg@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:23:02 by oseivane          #+#    #+#             */
/*   Updated: 2023/12/06 19:11:17 by osg              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <ctype.h>
# include <limits.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include "libft.h"
# include "ft_printf.h"

typedef struct s_stack
{
	int				num;
	long			ind;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

int		main(int argc, char **argv);
t_stack	*ft_process(int argc, char **argv);
t_stack	*ft_subprocess(char **argv);
int		ft_atoi2(const char *str);
int		ft_check_isrep(char **argv);
int		ft_check_isalpha(char *argv);
int		ft_check_error(char **argv);
int		ft_check_error2(char **strarg);
t_stack	*ft_new_node(int num);
t_stack	*ft_first_node(t_stack *node);
t_stack	*ft_last_node(t_stack *node);
void	ft_add_node_back(t_stack **elem, t_stack *new);
void	ft_add_node_front(t_stack **lst, t_stack *new);
void	ft_error(void);
void	ft_print_stack(t_stack *a);
void	ft_op_sa(t_stack **a, int j);
void	ft_op_sb(t_stack **b, int j);
void	ft_op_ss(t_stack **a, t_stack **b, int j);
void	ft_op_pb(t_stack **stack_a, t_stack **stack_b, int j);
void	ft_op_pa(t_stack **b, t_stack **a, int j);
void	ft_op_ra(t_stack **a, int j);
void	ft_op_rb(t_stack **b, int j);
void	ft_op_rr(t_stack **a, t_stack **b, int j);
void	ft_op_rra(t_stack **a, int j);
void	ft_op_rrb(t_stack **b, int j);
void	ft_op_rrr(t_stack **a, t_stack **b, int j);
void	ft_rrr_sub(t_stack **b, int j);
int		ft_case_rarb(t_stack *a, t_stack *b, int c);
int		ft_case_rrarrb(t_stack *a, t_stack *b, int c);
int		ft_case_rrarb(t_stack *a, t_stack *b, int c);
int		ft_case_rarrb(t_stack *a, t_stack *b, int c);
int		ft_case_rarb_a(t_stack *a, t_stack *b, int c);
int		ft_case_rrarrb_a(t_stack *a, t_stack *b, int c);
int		ft_case_rarrb_a(t_stack *a, t_stack *b, int c);
int		ft_case_rrarb_a(t_stack *a, t_stack *b, int c);
int		ft_rotate_type_ba(t_stack *a, t_stack *b);
int		ft_rotate_type_ab(t_stack *a, t_stack *b);
int		ft_apply_rarb(t_stack **a, t_stack **b, int c, char s);
int		ft_apply_rrarrb(t_stack **a, t_stack **b, int c, char s);
int		ft_apply_rrarb(t_stack **a, t_stack **b, int c, char s);
int		ft_apply_rarrb(t_stack **a, t_stack **b, int c, char s);
int		ft_stack_l(t_stack *stack);
void	ft_free(t_stack **lst);
void	ft_freestr(char **lst);
int		ft_find_index(t_stack *a, int num);
int		ft_find_place_b(t_stack *b, int num_p);
int		ft_find_place_a(t_stack *a, int num_p);
int		ft_min(t_stack *a);
int		ft_max(t_stack *a);
int		ft_sorted(t_stack *a);
t_stack	**ft_sort_a(t_stack **stack_a, t_stack **stack_b);
t_stack	*ft_sort_b(t_stack **stack_a);
void	ft_sort_b_till_3(t_stack **stack_a, t_stack **stack_b);
void	ft_sort_3(t_stack **stack_a);
void	ft_sort_stack(t_stack **stack_a);

#endif