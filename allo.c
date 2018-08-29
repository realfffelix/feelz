/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 20:40:14 by fdubois           #+#    #+#             */
/*   Updated: 2018/08/14 03:14:32 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

char	*readinput(int fd)
{
	unsigned char buffer;
	int bytes;
	int k;
	char *str;

	if (!(str = (char*)malloc(sizeof(char) * 10000)))
		return (NULL);
	k = 0;
	do {
		char t;

		t = 0;
		bytes = read(fd, &t, 1);
		buffer = t;
	
		if (buffer > 0 && buffer < 128)
		{
			str[k] = buffer;
//			write(1, &buffer, 1);
			k++;
		}
	}
	while (buffer != 0 && bytes != 0 && bytes != EOF);
	str[k] = '\0';
	return (str);
}

int	main(int ac, char **av)
{
	char *str;
	if (!(str = (char*)malloc(sizeof(char) * 10000)))
		return 0;
	if (ac == 2)
	{
		int i;
		int fd;

		i = 0;
		fd = open(av[1], O_RDONLY);
//		readinput(fd);
		str = readinput(fd);
		while (str[i] != '\0')
		{
			write(1, str + i, 1);
			i++;
		}
	}
	return (0);
}
