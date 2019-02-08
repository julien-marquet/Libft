/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memalloc.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/07 18:28:40 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/08 23:05:35 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	unsigned char	*buffer;
	size_t			i;

	if (!(buffer = (unsigned char*)malloc(size)))
		return (NULL);
	i = 0;
	while (i < size)
		buffer[i++] = 0;
	return ((void*)buffer);
}
