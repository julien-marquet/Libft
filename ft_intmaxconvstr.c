/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_intmaxconvstr.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/28 21:40:34 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/28 23:27:51 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

char	*ft_intmaxconvstr(intmax_t nbr, size_t *size)
{
	char	*str;
	size_t	i;

	i = ft_getstrsize_intmax(nbr) - 1;
	*size = i + 1;
	if ((str = ft_memalloc(i + 1)) == NULL)
		return (NULL);
	if (nbr == -9223372036854775807)
	{
		str[0] = '-';
		str[i--] = '7';
		nbr = -922337203685477580;
	}
	else if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 9)
	{
		str[i--] = (char)(48 + nbr % 10);
		nbr = nbr / 10;
	}
	str[i] = (char)(48 + nbr % 10);
	return (str);
}
