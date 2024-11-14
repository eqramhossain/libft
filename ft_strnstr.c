/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:43:05 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/13 16:25:30 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main(void)
// {
// 	char	big[] = "";
// 	char	little[] = "";
// 	char	*ptr;
//
// 	ptr = ft_strnstr(big, little, 16);
// 	printf("%s\n", ptr);
// 	return (0);
// }

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr_big;
	char	*ptr_little;

	i = 0;
	ptr_big = (char *)big;
	ptr_little = (char *)little;
	if (ptr_little[i] == '\0')
		return (ptr_big);
	while (ptr_big[i] != '\0' && i < len)
	{
		j = 0;
		while (ptr_big[i] == ptr_little[j])
		{
			if (ptr_big[i + j] == ptr_little[j] && ptr_little[j + 1] == '\0')
				return (&ptr_big[i + j]);
			j++;
		}
		i++;
	}
	return (NULL);
}
