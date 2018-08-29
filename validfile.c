/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validfile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 03:10:01 by fdubois           #+#    #+#             */
/*   Updated: 2018/08/14 18:40:33 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	validfile(char *str)
{
	int i;
	int cols;
	int lines;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == '.' || str[i] == '#' || str[i] == '\n')
		{
			if (str[i] == '.')
				cols++;
			else if (str[i] == '\n')
			{
				if (cols != 4)
					return (0);
				lines++;
				i++;
				if (str[i] == '\n' && lines != 4)
					return (0);
			}		
			else if (str[i] == '#')
			{
			
			}

			i++;		
