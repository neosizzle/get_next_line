#include "get_next_line.h"

//function to free a pointer and points it to null
void	ft_freestr(char **str)
{
	if (str)
	{
		free(*str);
		*str = NULL;
	}
}

//this function reads from a fd
//sets the number of bytes read to a pointer
//return the number of bytes read
static size_t	read_buff(int fd, char *buff, int *bytes_read)
{
	int	res;

	res = read(fd, buff, BUFFER_SIZE);
	*bytes_read = res;
	return (res);
}

//function to extract a string containing newline
static char	*extract_line(char *s)
{
	int		i;
	char	*res;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	res = (char *)malloc(sizeof(char) * (i + 1));
	res = ft_substr(res, 0, i + 1);
	if (!res)
		return (0);
	return (res);
}

//gnl main func
//the general idea is to:
//1. read the fd for buff size with while its not EOF
//2. check the buff size if got any new lines
//	if yes, stop reading and trim the buffer and return
//	if no, continue reading 
//3. return null for err handling or EOF reached
char	*get_next_line(int fd)
{
	static char	*res;
	char	*buff;
	char	*temp;
	int		bytes_read;

	if (fd < 0 || fd > 1024 || BUFFER_SIZE < 1)
		return (NULL);
	buff = (char *) malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	while (read_buff(fd, buff, &bytes_read) > 0)
	{
		buff[bytes_read] = 0;
		if (!res)
			res = ft_bzero(0);
		temp = ft_strcat(temp, res);
		ft_freestr(&res);
		res = temp;
		if (ft_strchr(buff, '\n'))
			break;
	}
	ft_freestr(&buff);
	return (extract_line(res));
}