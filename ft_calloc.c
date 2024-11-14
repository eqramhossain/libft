/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:04:12 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/14 14:27:13 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsingned char	*ptr;

	ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	while (i < nmemb)
	{
		ft_memset(ptr, 0, size * nmemb);
	}
	return (ptr);
}
