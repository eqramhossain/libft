/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 23:43:41 by ehossain          #+#    #+#             */
/*   Updated: 2025/02/05 23:44:07 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen((char *)str);
	while (i > 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}
