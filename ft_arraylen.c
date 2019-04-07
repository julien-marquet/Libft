/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_arraylen.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/07 20:01:25 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/07 20:03:19 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_arraylen(const void **array)
{
	size_t	i;

	if (!array)
		return (0);
	i = 0;
	while (array[i] != NULL)
		i++;
	return (i);
}
