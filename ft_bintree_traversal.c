/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_bintree_traversal.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/26 23:30:37 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/26 23:42:51 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_bintree_traversal(t_bintree_node *node, void (*fun)(void *))
{
	if (node == NULL)
		return (0);
	ft_bintree_traversal(node->left, fun);
	fun(node->content);
	ft_bintree_traversal(node->right, fun);
	return (1);
}
