/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ouintmaxconvstr.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/01 20:41:40 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/01 22:20:40 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ouintmaxconvstr(uintmax_t nbr, size_t *size)
{
	char	*str;
	size_t	i;

	*size = ft_getstrsize_ouintmax(nbr);
	if ((str = (char*)malloc(*size + 1)) == NULL)
		return (NULL);
	str[*size] = '\0';
	i = 0;
	while (nbr > 7)
	{
		str[*size - i - 1] = (char)48 + (char)(nbr % (uintmax_t)8);
		nbr /= 8;
		i++;
	}
	str[0] = (char)48 + (char)(nbr);
	return (str);
}