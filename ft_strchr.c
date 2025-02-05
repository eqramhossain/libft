/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 21:19:29 by ehossain          #+#    #+#             */
/*   Updated: 2025/02/05 23:44:19 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main(int ac, char *av[])
// {
// 	(void)ac;
// 	printf("ft_strchr = %s\n", ft_strchr(av[1], av[2][0]));
// 	printf("ft_strrchr = %s\n", ft_strrchr(av[1], av[2][0]));
// 	return (0);
// }

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}
