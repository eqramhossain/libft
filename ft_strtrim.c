/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 10:33:45 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/18 14:07:52 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main(void)
// {
// 	char	set[] = "n";
// 	char	str[] = "n bonjour";
// 	char	*ptr;
//
// 	ptr = ft_strtrim(str, set);
// 	printf("the str = %s\n", ptr);
// 	return (0);
// }

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*ptr_s1;

	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
	{
		i++;
	}
	while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
	{
		j--;
	}
	len = (j - i);
	printf("char front = %zu\n", i);
	printf("char behind = %zu\n", j);
	printf("len = %zu\n", len);
	ptr_s1 = (char *)malloc(sizeof(char) * len + 1);
	if (!ptr_s1)
		return (NULL);
	ft_strlcpy(ptr_s1, &s1[i], len);
	return (ptr_s1);
}
