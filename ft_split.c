/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 08:58:04 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/20 12:28:18 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c);
static void		ft_freeup(char *str);
static void		ft_strcpy(char *word, char *str, char c, size_t j);
static char		*ft_stralloc(char *str, char c, size_t *k);

int	main(void)
{
	char	str[] = "hello/this/is/a/test/of/Split/";
	char	c;
	char	**ptr_split;

	c = '/';
	ptr_split = ft_split(str, c);
	for (int i = 0; i < 8; i++)
	{
		printf("the ptr_split[i] = %d %s\n", i, ptr_split[i]);
	}
	printf("counted word in str = %zu\n", ft_count_words(str, c));
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr_s;
	size_t	i;
	size_t	pos;
	size_t	word;

	ptr_s = NULL;
	i = 0;
	pos = 0;
	word = ft_count_words(s, c);
	ptr_s = (char **)malloc(sizeof(char *) * (word + 1));
	if (ptr_s == NULL)
		return (NULL);
	ptr_s[word] = NULL;
	while (i < word)
	{
		ptr_s[i] = ft_stralloc((char *)s, c, &pos);
		if (ptr_s[i] == NULL)
		{
			ft_freeup(ptr_s[i]);
		}
		i++;
	}
	return (ptr_s);
}

static size_t	ft_count_words(const char *s, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i] != '\0')
				i++;
			if (s[i] == '\0')
				return (word);
		}
		i++;
	}
	return (word);
}

static void	ft_freeup(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		free(str);
		i++;
	}
	free(str);
}

static char	*ft_stralloc(char *str, char c, size_t *k)
{
	char	*word;
	int		j;

	j = *k;
	word = NULL;
	while (str[*k] != '\0')
	{
		if (str[*k] != c)
		{
			while (str[*k] != '\0' && str[*k] != c)
				*k += 1;
			word = (char *)malloc(sizeof(char) * (*k + 1));
			if (word == NULL)
				return (NULL);
			break ;
		}
		*k += 1;
	}
	ft_strcpy(word, str, c, j);
	return (word);
}

static void	ft_strcpy(char *word, char *str, char c, size_t j)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0' && str[i] == c)
		j++;
	while (str[i + j] != '\0' && str[i + j] != c)
	{
		word[i] = str[i + j];
		i++;
	}
	word[i] = '\0';
}
