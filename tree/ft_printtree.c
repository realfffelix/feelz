/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printtree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 19:35:48 by fdubois           #+#    #+#             */
/*   Updated: 2018/08/26 03:26:53 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tree.h"
#include <stdio.h>

void	ft_printtree(t_tree *tree)
{
	if (tree == NULL)
		printf("NON\n");
	if (tree->up->up != NULL)
		printf("[%c, %c] -> [%c, %c] -> [%c, %c] \n",
			tree->up->up->y, tree->up->up->x ,tree->up->y, tree->up->x, tree->y, tree->x);
	else if (tree->up != NULL)
		printf("[%c, %c] -> [%c, %c] \n", tree->up->y ,tree->up->x, tree->y, tree->x);
	else
		printf("[%c, %c] \n", tree->y, tree->x);
	
	if (tree->down != NULL)
		ft_printtree(tree->down);
	if (tree->right != NULL)
		ft_printtree(tree->right);
	else if (tree->up->right != NULL)
		ft_printtree(tree->up->right);
	else if (tree->up->up->right != NULL)
		ft_printtree(tree->up->up->right);
}


