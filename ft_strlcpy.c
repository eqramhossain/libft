/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 19:07:30 by ehossain          #+#    #+#             */
/*   Updated: 2025/01/08 19:29:20 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int main(void)
// {
// 	char dest[20];
// 	char *src = NULL;
// 	printf("ft_strlcpy = %d\n", ft_strlcpy(dest, src, 10));
// 	printf("dest = %s\n", dest);
// 	return 0;
// }

size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (i < len && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
