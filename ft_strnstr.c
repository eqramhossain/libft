/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 09:23:36 by ehossain          #+#    #+#             */
/*   Updated: 2025/02/13 10:20:14 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main(void)
// {
// 	char	*heystack;
// 	char	*needle;
// 	char	*str;
//
// 	heystack = "hello world!";
// 	needle = "world!";
// 	str = ft_strnstr(heystack, needle, 15);
// 	printf("str = %s\n", str);
// 	return (0);
// }

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] == needle[j] && str[i + j] && (i + j) < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
