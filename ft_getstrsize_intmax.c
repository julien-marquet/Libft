/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_getstrsize_intmax.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/28 21:50:57 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/28 22:40:00 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_getstrsize_intmax(intmax_t nbr)
{
	size_t	i;

	i = 1;
	if (nbr == -9223372036854775807)
		return (20);
	else if (nbr < 0)
	{
		nbr = -nbr;
		i++;
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}
