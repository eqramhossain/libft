/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 09:11:56 by ehossain          #+#    #+#             */
/*   Updated: 2025/02/10 09:30:59 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main(void)
// {
// 	char	*str;
//
// 	str = ft_substr("hello ikram how are you", 5, 100);
// 	printf("str = %s\n", str);
// 	return (0);
// }

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = ft_calloc(len, sizeof(char));
	if (!str)
		return (NULL);
	while (s[start] && start < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[start] = '\0';
	return (str);
}
