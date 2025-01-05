/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 16:11:22 by ehossain          #+#    #+#             */
/*   Updated: 2025/01/05 16:29:26 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int main(int ac, char *av[])
// {
// 	(void)ac;
// 	char *str = ft_memset(av[1], 128, 10);
// 	printf("str = %s\n", str);
// 	return (0);
// }


void *ft_memset(char *str, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && str[i])
	{
		str[i] = (char)c;
		i++;
	}
	return (str);
}
