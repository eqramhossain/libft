/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:39:41 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/17 11:05:21 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//
// int	main(void)
// {
// 	int					src[10] = {1,2,3,4,5,6,7,8,9,10};
// 	size_t				i;
// 	unsigned char		*ptr_dest;
// 	const unsigned char	*ptr_src;
//
// 	memmove(src + 4, src, 5);
// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("The memmove src[%d] = %d\n", i, src[i]);
// 	}
// 	ft_memmove(src + 4, src, 5);
// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("The ft_memmove src[%d] = %d\n", i, src[i]);
// 	}
// 	return (0);
// }

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;

	i = 0;
	ptr_dest = (unsigned char *)dest;
	ptr_src = (const unsigned char *)src;
	if (dest < src)
	{
		return (ft_memcpy(dest, src, n));
	}
	if (dest > src)
	{
		while (i < n)
		{
			ptr_dest[i] = ptr_src[i];
			i++;
		}
	}
	return (dest);
}
