#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

//GNL main function
char	*get_next_line(int fd);

//utils
size_t	ft_strlen(char *s);
char	*ft_strcat(char *s1, char *s2);
char	*ft_strchr(char *s, int c);
char	*ft_substr(char *str, int start, int len);

#endif