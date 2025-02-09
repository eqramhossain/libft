/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 20:43:07 by ehossain          #+#    #+#             */
/*   Updated: 2025/02/09 20:58:41 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main(int ac, char *av[])
// {
// 	void	*str;
//
// 	(void)ac;
// 	str = ft_memchr(av[1], 'o', 3);
// 	printf("str = %s\n", (char *)str);
// 	return (0);
// }

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*tmp_str;
	size_t	i;

	tmp_str = (char *)str;
	i = 0;
	while (tmp_str[i] && i < n)
	{
		if (tmp_str[i] == (char)c)
		{
			return (tmp_str + i);
		}
		i++;
	}
	return (NULL);
}
