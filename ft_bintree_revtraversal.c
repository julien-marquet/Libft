/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_bintree_revtraversal.c                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/27 00:42:59 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/27 01:09:05 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_bintree_revtraversal(t_bintree_node *node, void (*fun)(void *))
{
	if (node == NULL)
		return (0);
	ft_bintree_traversal(node->right, fun);
	fun(node->content);
	ft_bintree_traversal(node->left, fun);
	return (1);
}
