/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:04:12 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/16 11:15:32 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = malloc(size * nmemb);
	i = 0;
	if (!ptr)
		return (NULL);
	while (i < nmemb)
	{
		ft_memset(ptr, 0, size * nmemb);
	}
	return (ptr);
}
