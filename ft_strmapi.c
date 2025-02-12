/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:35:54 by ehossain          #+#    #+#             */
/*   Updated: 2025/02/12 13:12:23 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	ft_uppercase(unsigned int index, char c);
//
// int	main(int ac, char *av[])
// {
// 	char	*str;
//
// 	(void)ac;
// 	str = ft_strmapi(av[1], ft_uppercase);
// 	printf("str = %s\n", str);
// 	return (0);
// }
//
// char	ft_uppercase(unsigned int index, char c)
// {
// 	printf("index = %u\n", index);
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*str;

	i = 0;
	len = ft_strlen(s);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
