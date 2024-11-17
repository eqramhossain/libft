/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 08:20:47 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/17 11:49:35 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr_s;

	i = 0;
	if (!s)
		return (NULL);
	ptr_s = (char *)malloc(sizeof(*s) * len + 1);
	if (!ptr_s)
		return (NULL);
	if (s)
	{
		while (i != len)
		{
			ptr_s[i] = s[i + start];
			i++;
		}
	}
	ptr_s[i] = '\0';
	return (ptr_s);
}
