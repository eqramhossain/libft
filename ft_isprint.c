/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 15:46:12 by ehossain          #+#    #+#             */
/*   Updated: 2025/01/05 15:56:55 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int ft_isprint(int c);
//
// int main(void)
// {
// 	printf("ft_isprint = %d\n", ft_isprint(10));
// 	return (0);
// }

int ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return 0;
}
