/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 20:06:07 by ehossain          #+#    #+#             */
/*   Updated: 2025/02/12 18:10:36 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main(void)
// {
// 	char	buffer[20] = "Hello, ";
// 	char	*src;
// 	size_t	size;
// 	size_t	result;
//
// 	src = "World!";
// 	size = 14;
// 	printf("Before strlcat: '%s'\n", buffer);
// 	result = ft_strlcat(buffer, src, size);
// 	printf("After strlcat: '%s'\n", buffer);
// 	printf("Total length that would have been created: %zu\n", result);
// 	printf("%zu\n", ft_strlcat(buffer, src, 16));
// 	printf("%zu\n", strlcat(buffer, src, 16));
// 	return (0);
// }

size_t	ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t	i;
	size_t	len_dest;
	size_t	len_src;

	i = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (len_dest == len)
		return (len_src + len);
	while (src[i] && len_dest + 1 < len)
	{
		dest[len_dest] = src[i];
		i++;
		len_dest++;
	}
	dest[len_dest] = '\0';
	return (len_dest + len_src);
}
