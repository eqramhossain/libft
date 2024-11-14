/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:32:40 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/13 14:41:59 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr_s;

	i = 0;
	ptr_s = (char *)s;
	if (!ptr_s)
		return (NULL);
	while (ptr_s[i] != '\0')
		i++;
	while (i > 0)
	{
		if (ptr_s[i] == c)
		{
			return (&ptr_s[i]);
		}
		i--;
	}
	return (NULL);
}
