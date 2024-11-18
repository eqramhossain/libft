/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:11:56 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/18 12:17:09 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strcat(const char *dest, const char *src)
// {
// 	size_t	i;
//
// 	i = 0;
// 	dest = (char *)malloc(sizeof(char) * src + 1);
// 	while (src[i] != '\0')
// 	{
// 		dest[i] = src[i];
// 		i++
// 	}
// 	dest[i] = '\0';
// 	return (dest);
// }

// int	main(void)
// {
// 	char	str1[] = "a;sldjkflasjdfl;jkasdf";
// 	char	str2[] = "hello";
// 	char	*ptr;
//
// 	ptr = ft_strjoin(str1, str2);
// 	printf("%s\n", ptr);
// 	return (0);
// }

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	n;
	char	*dest;

	i = 0;
	j = 0;
	n = ft_strlen(s1) + ft_strlen(s2);
	dest = (char *)malloc(sizeof(char) * n + 1);
	if (!dest)
		return (NULL);
	if (n != 0)
		while (s1[i] != '\0')
		{
			dest[i] = s1[i];
			i++;
			n--;
		}
	if (n != 0)
		while (s2[j + i] != '\0')
		{
			dest[j + i] = s2[j];
			j++;
			n--;
		}
	dest[n] = '\0';
	return (dest);
}
