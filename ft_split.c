/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:19:19 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/20 14:44:17 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	ft_freeup(char *strs);
static int	ft_countword(char *str, char c);
static void	ft_strcpy(char *word, char *str, char c, int j);
static char	*ft_stralloc(char *str, char c, int *k);

int	main(void)
{
	char	str[] = "/hello/this/is/a/test/of/Split/";
	char	c;
	char	**ptr_split;

	c = '/';
	ptr_split = ft_split(str, c);
	for (int i = 0; i < 8; i++)
	{
		printf("the ptr_split[%d] = %s\n", i, ptr_split[i]);
	}
	printf("counted word in str = %d\n", ft_wordcount(str, c));
	return (0);
}

char	**ft_split(char const *str, char c)
{
	char	**ptr_str;
	int		pos;
	int		i;
	int		j;

	if (str == NULL)
		return (NULL);
	pos = 0;
	i = 0;
	j = ft_countword(str, c);
	ptr_str = (char **)malloc(sizeof(char *) * (j + 1));
	if (ptr_str == NULL)
		return (NULL);
	ptr_str[j] = NULL;
	while (i < j)
	{
		ptr_str[i] = ft_stralloc(((char *)str), c, &pos);
		if (ptr_str[i] == NULL)
		{
			ft_freeup(ptr_str[i])
		}
		i++;
	}
	return (ptr_str);
}

static int	ft_countword(char *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c) /* till it arrive at first occurance */
		{
			word += 1;
			while (str[i] != c && str[i] != '\0')
			{
				i++;
			}
			if (str[i] == '\0')
				return (word);
		}
		i++;
	}
	return (word);
}

static char	*ft_stralloc(char *str, char c, int *k)
{
	int i
}
