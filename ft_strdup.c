/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 09:00:02 by ehossain          #+#    #+#             */
/*   Updated: 2025/02/10 09:08:53 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*str;

	str = ft_strdup("askjdflajksd;lfjk;alka;slkdfj");
	printf("str = %s\n", str);
	return (0);
}

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	len = 0;
	while (s1[len])
		len++;
	str = ft_calloc(len, sizeof(char));
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	return (str);
}
