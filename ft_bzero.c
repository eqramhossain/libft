/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 16:31:46 by ehossain          #+#    #+#             */
/*   Updated: 2025/01/05 16:51:22 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <strings.h>
// int main(int argc, char *argv[])
// {
// 	(void)argc;
// 	char *str = ft_bzero(argv[1], 10);
// 	char *str2 = ft_bzero(argv[1], 10);
// 	printf("str = %s\n", str);
// 	printf("str2 = %s\n", str2);
// 	return 0;
// }

void *ft_bzero(char *str, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && str[i])
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
