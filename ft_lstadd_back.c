/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayed <ybayed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 09:53:51 by ybayed            #+#    #+#             */
/*   Updated: 2022/11/11 09:53:52 by ybayed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == 0)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}

// void	ft_lstadd_back(t_list **list, t_list *new)
// {
// 	if (!*list)
// 	{
// 		*list = new;
// 		return ;
// 	}
// 	ft_lstlast(*list)->next = new;
// }