/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree_addkhoya.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 20:06:08 by fdubois           #+#    #+#             */
/*   Updated: 2018/08/26 03:16:38 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tree.h"

t_tree	*ft_tree_addkhoya(t_tree **tree_root, char y, char x)
{
	t_tree	*index;
	t_tree	*parent;

	index = *tree_root;

	parent = index->up;
	if (index != NULL)
	{
		while (index->right)
			index = index->right;
		index->right = ft_create_elem(y, x);
		index = index->right;
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
