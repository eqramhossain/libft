/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:49:47 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/13 12:31:53 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main(void)
// {
// 	char	str[] = "hello world";
// 	char	*ptr;
//
// 	ptr = ft_strchr(str, 'e');
// 	printf("%s\n", ptr);
// 	return (0);
// }
char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr_s;

	i = 0;
	ptr_s = (char *)s;
	while (ptr_s[i] != '\0')
	{
		if (ptr_s[i] == c)
		{
			return (&ptr_s[i]);
		}
		i++;
	}
	return (NULL);
}
