#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

//GNL main function
char	*get_next_line(int fd);

//utils
size_t	ft_strlen(const char *s);
char	*ft_strcat(char *s1, char *s2);
char	*ft_strchr(const char *s, int c);
char	*ft_substr(const char *str, size_t start, size_t len);
char	*ft_bzero(size_t size);

#endif