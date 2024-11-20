#include <stdio.h>

static size_t	ft_count_words(char *s, char c);
static void		ft_freeup(char *str);

int	main(void)
{
	char	c;
	size_t	words;
	char	str[] = "/hello/world/this/is/a/test";

	/* 	char	str[] = "hello"; */
	// char	**ptr_split;
	c = '/';
	// ptr_split = ft_split(str, c);
	// for (int i = 0; i < 8; i++)
	// {
	// 	printf("the ptr_split[i] = %d %s\n", i, ptr_split[i]);
	// }
	/* 	ft_count_words(str, c); */
	words = ft_count_words(str, c);
	printf("%zu\n", words);
	return (0);
}

static size_t	ft_count_words(char *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i] != '\0')
				i++;
			if (s[i] == '\0')
				return (words);
		}
		i++;
	}
	return (words);
}

static void	ft_freeup(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		free(s[i]);
		i++;
	}
	free(s);
}
