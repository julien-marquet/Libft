/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lst_append.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/11 21:17:20 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/11 21:19:43 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstappend(t_list **alst, t_list *elem)
{
	t_list	*tmp;

	if (alst == NULL || elem == NULL)
		return (NULL);
	if (*alst == NULL)
		*alst = elem;
	else
	{
		tmp = *alst;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = elem;
	}
	return (*alst);
}
