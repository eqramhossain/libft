/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:38:52 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/14 10:56:09 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsinged char	*ptr_s1;
	unsinged char	*ptr_s2;

	i = 0;
	ptr_s1 = (unsinged char *)s1;
	ptr_s2 = (unsinged char *)s2;
	while (ptr_s1[i] == ptr_s2 && ptr_s1[i] && ptr_s2[i] && i < n)
	{
		if (ptr_s1[i] != ptr_s2p[i])
		{
			return (ptr_s1[i] - ptr_s2[i]);
		}
		i++;
	}
	return (0);
}
