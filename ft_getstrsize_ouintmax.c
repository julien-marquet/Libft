/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_getstrsize_ouintmax.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/01 20:42:06 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/01 22:20:39 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_getstrsize_ouintmax(uintmax_t nbr)
{
	size_t	size;

	size = 1;
	while (nbr > 7)
	{
		nbr /= 8;
		size++;
	}
	return (size);
}
