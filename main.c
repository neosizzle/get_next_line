#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
int	main()
{
    int fd = open("test.txt", O_RDONLY);
    printf("%s\n",get_next_line(fd));
    printf("%s\n",get_next_line(fd));
    printf("%s\n",get_next_line(fd));
    // char *s1 = "h1";
    // char *s2 = "hello";
    // char *s3 = ft_strcat(s1,s2);
    // printf("%s\n", s3);
}
