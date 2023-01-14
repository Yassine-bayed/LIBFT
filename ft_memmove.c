/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayed <ybayed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 09:54:33 by ybayed            #+#    #+#             */
/*   Updated: 2022/11/11 09:54:34 by ybayed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src1;
	char	*dst1;

	dst1 = (char *)dst;
	src1 = (char *)src;
	if (src1 == NULL && dst1 == NULL)
		return (dst);
	if (dst1 >= src1)
		while (len-- > 0)
			dst1[len] = src1[len];
	else
		ft_memcpy(dst1, src1, len);
	return (dst);
}	
