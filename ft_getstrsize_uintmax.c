/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_getstrsize_uintmax.c                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/01 19:37:49 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/01 19:38:10 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_getstrsize_uintmax(uintmax_t nbr)
{
	size_t	i;

	i = 1;
	while (nbr > 9)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}
