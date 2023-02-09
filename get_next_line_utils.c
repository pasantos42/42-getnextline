/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 19:27:45 by pasantos          #+#    #+#             */
/*   Updated: 2023/02/03 19:27:45 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	return (i);
}

int	find(char c, char *line)
{
	if (!line)
		return (0);
	while (*line)
		if (*line++ == c)
			return (1);
	return (0);
}

void	clean(char *buf)
{
	int	i;
	int	j;

	i = ft_strlen(buf);
	j = 0;
	while (buf[i])
		buf[j++] = buf[i++];
	while (buf[j])
		buf[j++] = '\0';
}

char	*ft_strjoin(char *line, char *buf)
{
	char	*nw_line;
	int		i;
	int		j;

	i = 0;
	j = 0;
	nw_line = malloc((ft_strlen(line) + ft_strlen(buf) + 1) * sizeof(char));
	if (!nw_line)
		return (0);
	if (line)
		while (line[i])
		{
			nw_line[i] = line[i];
			i++;
		}
	while (buf[j])
	{
		nw_line[i] = buf[j++];
		if (nw_line[i++] == '\n')
			break ;
	}
	nw_line[i] = '\0';
	free(line);
	return (nw_line);
}
