/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 18:47:02 by ehossain          #+#    #+#             */
/*   Updated: 2025/02/12 17:30:25 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main(void)
// {
// 	char	str[] = "Hello, World!";
//
// 	ft_memmove(str + 7, str, 5);
// 	printf("%s\n", str); // Output: "Hello, Hello!"
// 	return (0);
// }

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;

	i = 0;
	tmp_dest = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (n > 0)
		{
			tmp_dest[n - 1] = tmp_src[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			tmp_dest[i] = tmp_src[i];
			i++;
		}
	}
	return (tmp_dest);
}
