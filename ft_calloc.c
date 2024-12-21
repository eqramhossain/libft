/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:04:12 by ehossain          #+#    #+#             */
/*   Updated: 2024/12/21 11:46:10 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, size * nmemb);
	return (ptr);
}

// UPDATED FT_CALLOC WILL BE USEFUL FOR GET_NEXT_LINE
// void	*ft_calloc(size_t nmemb, size_t size)
// {
// 	unsigned char	*ptr;
// 	size_t			i;
//
// 	i = 0;
// 	ptr = malloc(nmemb * size);
// 	if (!ptr)
// 		return (NULL);
// 	while (i < nmemb)
// 	{
// 		ptr[i] = 0;
// 		i++;
// 	}
// 	return (ptr);
// }
