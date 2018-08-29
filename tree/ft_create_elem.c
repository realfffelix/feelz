/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 19:31:33 by fdubois           #+#    #+#             */
/*   Updated: 2018/08/26 02:36:25 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_tree.h"

t_tree	*ft_create_elem(char y, char x)
{
	t_tree *new;

	if (!(new = malloc(sizeof(t_tree))))
		return (NULL);

	new->y = y;
	new->x = x;
	return (new);
}
