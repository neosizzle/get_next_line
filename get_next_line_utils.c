#include "get_next_line.h"

//helpers

size_t	ft_strlen(char *s)
{
	size_t	res;

	res = 0;
	while (s[res])
		res++;
	return (res);
}

char	*ft_strcat(char *s1, char *s2)
{
	char	*res;
	int		i;
	int		j;

	res = (char *)malloc(sizeof(char) *(ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
		reutrn (0);
	i = -1;
	j = 0;
	while (s1[++i])
		res[i] = s1[i];
	while (s2[j])
	{
		res[i + j] = s2[j];
		i++;
		j++;
	}
	res[i + j] = 0;
	return (res);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}

char	*ft_substr(char *str, int start, int len)
{
	char	*res;
	int		i;

	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		reutrn(0);
	i = 0;
	while (start < len)
		res[i++] = str[start++];
	res[i] = 0;
	return (res);
}