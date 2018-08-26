/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_bintree_new.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/26 22:22:25 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/26 23:13:53 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_bintree_node	*ft_bintree_new(void const *content, size_t content_size)
{
	t_bintree_node	*new;

	if (!(new = (t_bintree_node*)malloc(sizeof(t_bintree_node))))
		return (NULL);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		if (!(new->content = (void*)malloc(content_size)))
			return (NULL);
		ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;
	}
	new->left = NULL;
	new->right = NULL;
	return (new);
}
