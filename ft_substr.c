/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 08:20:47 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/19 14:03:51 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	strlen_s;
	char	*ptr_s;

	i = 0;
	j = 0;
	strlen_s = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= strlen_s)
		return (ft_strdup(""));
	if (len > strlen_s - start)
		len = strlen_s - start;
	ptr_s = (char *)malloc(sizeof(*s) * (len + 1));
	if (!ptr_s)
		return (NULL);
	i = start;
	while (i < strlen_s && j < len)
	{
		ptr_s[j] = s[i];
		i++;
		j++;
	}
	ptr_s[j] = '\0';
	return (ptr_s);
}
