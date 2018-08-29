/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree_addson.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 20:06:08 by fdubois           #+#    #+#             */
/*   Updated: 2018/08/26 03:20:56 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tree.h"

t_tree	*ft_tree_addson(t_tree **tree_root, char y, char x)
{
	t_tree	*index;
	t_tree	*parent;

	index = *tree_root;
	parent = index->up;
	if (index != NULL)
	{
		while (index->down)
			index = index->down;
		index->down = ft_create_elem(y, x);
		index = index->down;
		index->up = parent;
		index->right = NULL;
		index->down = NULL;
	}
	else
	{
		index = ft_create_elem(y, x);
		index->up = NULL;
		index->right = NULL;
		index->down = NULL;
	}
	return (index);
}
