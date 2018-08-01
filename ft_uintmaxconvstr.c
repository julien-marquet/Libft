/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_uintmaxconvstr.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/01 19:36:04 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/01 19:38:43 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

char	*ft_uintmaxconvstr(uintmax_t nbr, size_t *size)
{
	char	*str;
	size_t	i;

	i = ft_getstrsize_uintmax(nbr) - 1;
	*size = i + 1;
	if ((str = ft_memalloc(i + 2)) == NULL)
		return (NULL);
	str[i + 1] = '\0';
	while (nbr > 9)
	{
		str[i--] = (char)(48 + nbr % 10);
		nbr = nbr / 10;
	}
	str[i] = (char)(48 + nbr % 10);
	return (str);
}
