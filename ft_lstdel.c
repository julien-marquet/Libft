/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdel.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/07 18:28:39 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/02 21:44:15 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*to_free;

	if (alst)
	{
		while ((*alst))
		{
			if ((*alst)->content)
				del((*alst)->content, (*alst)->content_size);
			to_free = *alst;
			*alst = (*alst)->next;
			free(to_free);
		}
	}
}
