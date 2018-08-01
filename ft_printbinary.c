/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printbinary.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/01 21:18:30 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/01 22:02:39 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_printbinary(void *buffer, size_t size)
{
	size_t		i;
	char		mask;
	char		*cast;

	mask = 128;
	cast = (char*)buffer;
	i = size * 8 - 1;
	while (i > 0)
	{
		if ((cast[i / 8] & mask) == mask)
			ft_putchar('1');
		else
			ft_putchar('0');
		cast[i / 8] = cast[i / 8] << 1;
		i--;
	}
}
