/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 19:15:22 by pasantos          #+#    #+#             */
/*   Updated: 2023/02/03 19:15:22 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buf[FOPEN_MAX][BUFFER_SIZE];
	char		*line;

	line = NULL;
	if (fd > FOPEN_MAX || fd < 0)
		return (0);
	while (buf[fd][0] || read(fd, buf[fd], BUFFER_SIZE) > 0)
	{
		if ()
		line = ft_strjoin(line, buf[fd]);
		clean(buf[fd]);
		if (find('\n', line))
			break ;
	}
	return (line);
}

/* int	main(void)
{
	int		fd;
	char	*result;

	fd = open("file.txt", O_RDONLY);
	for (int i = 1; i <= 2; i++)
	{
		result = get_next_line(fd);
		printf("RETURNED: [%s]\n", result);
		free(result);
	}
	close(fd);
} */
