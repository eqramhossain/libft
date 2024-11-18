/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:32:40 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/18 15:45:07 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main(void)
// {
// 	char	str[] = "hello w\0orld";
// 	char	*ptr;
// 	char	*ptr2;
//
// 	ptr = ft_strrchr(str, '\0');
// 	ptr2 = strrchr(str, '\0');
// 	printf("%s\n", ptr);
// 	printf("%s\n", ptr2);
// 	return (0);
// }

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*ptr_s;

	i = 0;
	ptr_s = (char *)s;
	while (*ptr_s != '\0')
	{
		i++;
		ptr_s++;
	}
	while (i > 0)
	{
		if (*ptr_s == c)
		{
			return (ptr_s);
		}
		i--;
		ptr_s--;
	}
	if (c == '\0')
		return (ptr_s);
	return (0);
}
