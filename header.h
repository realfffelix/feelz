/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 22:46:32 by fdubois           #+#    #+#             */
/*   Updated: 2018/08/24 02:43:22 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

typedef	struct		s_tree
{
	int y;
	int x;
	struct s_tree	*up;
	struct s_tree	*down;
	struct s_tree	*right;
}			t_tree;


typedef struct		s_list
{
	char		**fig;
	struct s_list	*right;
	struct s_list	*left;
}			t_list;

int	validfile(char *str);
// checks that file passed as argument is valid

#endif
