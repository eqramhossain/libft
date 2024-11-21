/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:41:08 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/21 11:41:39 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_number_size(long int number);

// int	main(void)
// {
// 	int		i;
// 	char	*ptr;
//
// 	i = -2147483648;
// 	ptr = ft_itoa(i);
// 	printf("The main = %s\n", ptr);
// 	return (0);
// }

char	*ft_itoa(int n)
{
	char				*string_n;
	unsigned long int	num;
	int					len;

	len = ft_number_size(n);
	string_n = (char *)malloc(sizeof(char) * (len + 1));
	if (string_n == NULL)
		return (NULL);
	if (n < 0)
	{
		num = (long int)n;
		string_n[0] = '-';
		num = -num;
	}
	else
		num = n;
	if (num == 0)
		string_n[0] = '0';
	string_n[len] = '\0';
	while (num != 0)
	{
		string_n[len - 1] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (string_n);
}

static unsigned int	ft_number_size(long int number)
{
	unsigned int	i;

	i = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		i = i + 1;
	while (number != 0)
	{
		number = number / 10;
		i++;
	}
	return (i);
}
