/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_realloc.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 21:18:24 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 21:39:45 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t old_size, size_t new_size)
{
	void	*res;

	if (ptr == NULL)
		return (NULL);
	if ((res = malloc(new_size)) == NULL)
		return (NULL);
	old_size = old_size >= new_size ? new_size : old_size;
	res = ft_memcpy(res, ptr, old_size);
	if (old_size != new_size)
		ft_bzero(&(res[old_size]), new_size - old_size);
	free(ptr);
	ptr = res;
	return (res);
}
