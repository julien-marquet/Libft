/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_bintree_insert.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/26 22:24:43 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/26 23:59:05 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int	recursive(t_bintree_node *cursor, t_bintree_node *node,
int (*sort)(void *, void *))
{
	int		sort_res;

	sort_res = sort(cursor->content, node->content);
	if (sort_res == 0)
	{
		if (cursor->left == NULL)
		{
			cursor->left = node;
			return (1);
		}
		else
			return (recursive(cursor->left, node, sort));
	}
	else
	{
		if (cursor->right == NULL)
		{
			cursor->right = node;
			return (1);
		}
		else
			return (recursive(cursor->right, node, sort));
	}
}

int			ft_bintree_insert(t_bintree_node **root, t_bintree_node *node,
int (*sort)(void *, void *))
{
	t_bintree_node	*cursor;

	if (root == NULL || node == NULL)
		return (0);
	if (*root == NULL)
		*root = node;
	else
	{
		cursor = *root;
		recursive(cursor, node, sort);
	}
	return (1);
}
