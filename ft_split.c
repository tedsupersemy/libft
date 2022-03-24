#include "libft.h"


static size_t	count_words(char const *s, char c)
{
	size_t word_count;

	word_count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			word_count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (word_count);
}

static char const	*skipchr(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return (s);
}

static void	create_words(char **words, char const *s, char c, size_t word_count)
{
	char	*ptr;

	s = skipchr(s, c);
	while (word_count--)
	{
		ptr = ft_strchr(s, c);
		if (ptr != NULL)
		{
			*words = ft_substr(s, 0, ptr - s);
			s = skipchr(ptr, c);
		}
		else
			*words = ft_substr(s, 0, ft_strlen(s) + 1);
		words++;
	}
	*words = NULL;
}

char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	char	**words;

	if (s == NULL)
		return (NULL);
	word_count = count_words(s, c);
	words = malloc(sizeof(char **) * (word_count + 1));
	if (words == NULL)
		return (NULL);
	create_words(words, s, c, word_count);
	return (words);
}
