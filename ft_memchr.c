/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 09:23:18 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/14 10:33:43 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr_s;
	unsigned char	*ptr_c;

	i = 0;
	ptr_s = (unsigned char *)s;
	ptr_c = (unsigned char *)c;
	while (i < n)
	{
		if (ptr[i] == c)
		{
			return (&ptr[i]);
		}
		i++;
	}
	return (NULL);
}
