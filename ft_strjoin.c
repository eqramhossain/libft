/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 09:50:09 by ehossain          #+#    #+#             */
/*   Updated: 2025/02/10 10:01:41 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main(void)
// {
// 	char	*str;
//
// 	str = ft_strjoin("hello", " world!");
// 	printf("str = %s\n", str);
// 	return (0);
// }

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	str = ft_calloc(len, sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	len = 0;
	while (s2[len])
	{
		str[i] = s2[len];
		len++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
