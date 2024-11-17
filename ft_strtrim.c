/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 10:33:45 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/17 11:39:56 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_trim(const char *c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (*c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	set[] = "!@#$%^&*()` _+{}:?><~";
	char	str[] = "asa;sdlfk  )!asdf@  (asdf #*asd fas df i)";
	char	*ptr;

	ptr = ft_strtrim(str, set);
	printf("%s\n", ptr);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	int		j;
	char	*ptr_s1;

	i = 0;
	ptr_s1 = (char *)malloc(sizeof(char) * ft_strlen(s1));
	if (!ptr_s1)
		return (NULL);
	while (ptr_s1[i] != '\0')
	{
		j = ft_trim(&ptr_s1[i], set);
		if (j == 1)
			i++;
		ptr_s1[i] = s1[i];
		i++;
	}
	return (ptr_s1);
}
