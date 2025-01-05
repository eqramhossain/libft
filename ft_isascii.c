/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 21:22:47 by ehossain          #+#    #+#             */
/*   Updated: 2025/01/05 15:56:10 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

// int ft_isascii(int c);
//
// int main(void)
// {
// 	printf("ft_isascii = %d\n", ft_isascii(128));
// 	return 0;
// }

int ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
