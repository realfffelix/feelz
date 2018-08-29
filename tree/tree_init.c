/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 19:31:33 by fdubois           #+#    #+#             */
/*   Updated: 2018/08/26 17:04:56 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_tree.h"

t_tree	*ft_tree_init(char y, char x)
{
	t_tree *new;

	if (!(new = malloc(sizeof(t_tree*) + 1)))
		return (NULL);

	new->y = y;
	new->x = x;
	new->up = NULL;
	new->right = NULL;
	new->down = NULL;
	return (new);
}
