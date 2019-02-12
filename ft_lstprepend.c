/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstprepend.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/12 11:05:39 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/12 11:11:27 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstprepend(t_list **alst, t_list *elem)
{
	if (alst == NULL || elem == NULL)
		return (NULL);
	if (*alst == NULL)
		*alst = elem;
	else
	{
		elem->next = *alst;
		*alst = elem;
	}
	return (*alst);
}
