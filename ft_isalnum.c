/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 21:12:06 by ehossain          #+#    #+#             */
/*   Updated: 2025/01/05 15:55:03 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int ft_isalnum(int c);
//
// int main(void)
// {
// 	printf("ft_isalnum = %d\n", ft_isalnum('<'));
// 	return (0);
// }

int ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return 1;
	else if (c >= 0 && c <= 9)
		return 1;
	return (0);
}
