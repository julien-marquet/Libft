/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/13 12:11:38 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/13 12:45:37 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstdup(t_list *lst)
{
	t_list	*new;
	t_list	*tmp;
	t_list	*old;
	t_list	*first;

	tmp = lst;
	new = NULL;
	old = NULL;
	while (tmp != NULL)
	{
		if ((new = ft_lstnew(tmp->content, tmp->content_size)) == NULL)
			return (NULL);
		if (old != NULL)
			old->next = new;
		else
			first = new;
		old = new;
		tmp = tmp->next;
	}
	return (first);
}
