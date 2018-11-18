#include "./libft/libft.h"
#include <fcntl.h>

unsigned short 	*readblock(int fd)
{
	char tmp;
	int i;
	int pow;
	unsigned short block;
	
	i = 1;
	pow = 32768;
	block = 0;
	while (read(fd, &tmp, 1) > 0)
	{
		if (!(i % 5) || i == 21)
		{
			if (tmp != '\n')
				return (0);
		}
		else if (tmp != '#' && tmp != '.')
			return (0);
		else
		{
			if (tmp == '#')
				block += (tmp - '0') * pow;
			pow /= 2;
		}
		i++;
	}
	return (block);
}
