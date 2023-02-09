#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 42
#endif

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	*get_next_line (int fd);
int		ft_strlen(char *str);
int		find (char c, char *buf);
void	clean (char *buf);
char	*ft_strjoin(char *text, char *buf);

#endif