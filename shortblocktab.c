/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shortblocktab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:07:33 by fdubois           #+#    #+#             */
/*   Updated: 2018/11/27 17:48:40 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <fcntl.h>
#include <unistd.h>

int	**readblock(int fd)
{
	char tmp;
	int i;
	int blockindex;
	int	**block;
	
	i = 0;
	if (!(block = (int**)malloc(sizeof(int*) * 4)))
		return (NULL);
	while (i < 5)
	{
		if (!(block[i++] = (int*)malloc(sizeof(int) * 4)))
			return (NULL);
	}
	i = 0;
	while (++i < 22)
	{
		if (read(fd, &tmp, 1) <= 0)
			return (0);
		if (!(i % 5) || i == 21)
		{
			if (tmp != '\n')
				return (NULL);
		}
		else if (tmp != '#' && tmp != '.')
			return (NULL);
		else
		{
			line = (i - 1) / 5;
			if (tmp == '#')
				block[line][i - 1] = 1;
			else
				block[line][i - 1] = 0;
		}
	}
	return (block);
}

int	validblock(unsigned short block)
{
	if (block == 52224 || block == 34952 || block == 61440 || block == 35008 
		|| block == 17600 || block == 11776 || block == 57856 || block == 50240 || block == 51328 ||
	   	block == 36352 || 	block == 59392 || block == 35968 || block == 58368 || block == 19520 || 
			block == 19968 || block == 50688 || block == 19584 || block == 27648 || block == 35904)
		return (1);
	return (0);
}

int main(int ac, char **av)
{
	int fd;
	unsigned short block = 0;
	if (ac != 2)
	{
		write(1, "Usage: ./feelit <TETRIMINOS FILENAME>\n", 38);
		exit(EXIT_FAILURE);
	}
	fd = open(av[1], O_RDONLY);
	while ((block = readblock(fd)) != 0)
	{
		ft_putnbr(block);
		if (!(validblock(block)))
		{
			write(1, "Error.\n", 7);
			exit(EXIT_FAILURE);		
		}
		else
		{

		}	
		write(1, "\n", 1);
	}
	write(1, "OK.\n", 3);
	return (0);
}
