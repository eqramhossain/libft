/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:31:32 by ehossain          #+#    #+#             */
/*   Updated: 2025/02/05 16:32:04 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.c"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*tmp_node;

	tmp_node = malloc(1 * sizeof(t_list));
	if (!tmp_node)
		return ;
	tmp_node = *lst;
	*lst = new;
	new->next = tmp_node;
}
