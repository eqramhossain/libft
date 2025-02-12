/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:03:18 by ehossain          #+#    #+#             */
/*   Updated: 2025/02/12 11:05:03 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main(int ac, char *av[])
// {
// 	char	*str;
//
// 	(void)ac;
// 	str = ft_strtrim(av[1], av[2]);
// 	printf("str = %s\n", str);
// 	return (0);
// }

char	*ft_strtrim(const char *s, const char *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = NULL;
	if (!s || !set)
		return (NULL);
	i = 0;
	j = ft_strlen((char *)s);
	while (s[i] && ft_strchr(set, s[i]))
		i++;
	while (j > i && s[j - 1] && ft_strchr(set, s[j - 1]))
		j--;
	str = ft_calloc(j - i + 1, sizeof(char));
	if (str)
	{
		ft_strlcpy(str, &s[i], (j - i + 1));
	}
	return (str);
}
