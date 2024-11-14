/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:28:19 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/14 15:35:37 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	str[] = "hello ";
	char	*ptr;

	ptr = ft_strdup(str);
	printf("%s\n", ptr);
	return (0);
}

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	strlen_s;
	char	*ptr;

	i = 0;
	strlen_s = ft_strlen(s);
	ptr = malloc(sizeof(char) * strlen_s);
	if (!ptr)
		return (NULL);
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	return (ptr);
}
