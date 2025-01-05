/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 19:48:46 by ehossain          #+#    #+#             */
/*   Updated: 2025/01/05 20:03:39 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>
int main(void)
{
	char *dest = malloc(15 * sizeof(char));
	ft_memcpy(dest, "hello this i a test", 15);
	char *dest2 =  malloc(15 * sizeof(char));
	memcpy(dest, "hello this i a test", 14);
	printf("dest = %s\n", dest);
	printf("dest2 = %s\n", dest2);
	return 0;
}

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	char *tmp_dest;
	char *tmp_src;

	i = 0;
	tmp_dest = (char *)dest;
	tmp_src  = (char *)src;
	if (!tmp_src[i])
		return (NULL);
	while (i < n && tmp_src[i])
	{
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	return (dest);
}
