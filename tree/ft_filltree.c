/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filltree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 02:17:10 by fdubois           #+#    #+#             */
/*   Updated: 2018/08/26 17:02:29 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tree.h"
#include <stdio.h>

int	main(void)
{
	printf("MICHEL");

	t_tree	*root;
	t_tree	*son;
	t_tree	*gson;
	t_tree	*index;
	printf("MICHEL");

	root = ft_tree_init('0', '1');
//	son = ft_tree_addson(&root, '1', '/');
//	gson = ft_tree_addson(&son, '1', '0');
//	ft_tree_addkhoya(&gson, '0', '/');

//	index = ft_tree_addkhoya(&son, '1', '0');
	printf("MICHEL");
	ft_printtree(root);
	return (0);
}
