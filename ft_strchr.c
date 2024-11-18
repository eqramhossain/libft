/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:49:47 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/18 15:51:07 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main(void)
// {
// 	char	str[] = "hello w\0orld";
// 	char	*ptr;
// 	char	*ptr2;
//
// 	ptr = ft_strchr(str, '\0');
// 	ptr2 = strchr(str, '\0');
// 	printf("%s\n", ptr);
// 	printf("%s\n", ptr2);
// 	return (0);
// }

// char	*ft_strchr(const char *s, int c)
// {
// 	char	*ptr_s;
//
// 	ptr_s = (char *)s;
// 	while (*ptr_s)
// 	{
// 		if (*ptr_s == c)
// 		{
// 			return (ptr_s);
// 		}
// 		ptr_s++;
// 	}
// 	if (c == '\0')
// 		return (ptr_s);
// 	return (0);
// }

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}
