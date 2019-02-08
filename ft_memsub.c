/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memsub.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/07 18:28:52 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/08 23:07:14 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memsub(void const *b, unsigned int start, size_t len)
{
	char			*new;
	const char		*src;
	unsigned int	index;

	src = b;
	if (!b)
		return (NULL);
	if (!(new = (void*)malloc(len)))
		return (NULL);
	index = 0;
	while (index < len)
	{
		new[index] = src[start + index];
		index++;
	}
	return (new);
}
