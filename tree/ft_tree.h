/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tree.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 19:27:44 by fdubois           #+#    #+#             */
/*   Updated: 2018/08/26 17:02:16 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TREE_H
# define FT_TREE_H

# include <stdlib.h>

typedef struct		s_tree
{
	char		y;
	char		x;
	struct s_tree	*up;
	struct s_tree	*right;
	struct s_tree	*down;
}			t_tree;

t_tree	*ft_create_elem(char y, char x);
t_tree	*ft_tree_init(char y, char x);
t_tree	*ft_tree_addson(t_tree **tree_root, char y, char x);
t_tree	*ft_tree_addkhoya(t_tree **tree_root, char y, char x);
void	ft_printtree(t_tree *tree);

#endif
