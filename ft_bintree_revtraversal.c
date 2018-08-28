/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_bintree_revtraversal.c                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/27 00:42:59 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/27 23:37:08 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_bintree_revtraversal(t_bintree_node *node, void *params, void (*fun)(void *, void *))
{
	if (node == NULL)
		return (0);
	ft_bintree_revtraversal(node->right, params, fun);
	fun(node->content, params);
	ft_bintree_revtraversal(node->left, params, fun);
	return (1);
}
