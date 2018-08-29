/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 02:34:21 by fdubois           #+#    #+#             */
/*   Updated: 2018/08/24 02:47:06 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_tree	*tree_new(int y, int x)
{
	t_tree	*new;

	if (!(new = malloc(sizeof(t_tree))))
		return (NULL);
	new->y = y;
	new->x = x;
	new->up = NULL;
	new->down = NULL;
	new->right = NULL;
	return (new);
}



t_tree	**tree_newchild(int y, int x, t_tree *ptr)
{
	t_list	*index;


