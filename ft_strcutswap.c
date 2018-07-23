/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcutswap.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/23 18:44:18 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/23 19:44:21 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_strcutswap(char **str, size_t width)
{
	char	*tmp;
	size_t	i;
	size_t	j;

	if (!str || !*str)
		return ;
	tmp = ft_strdup(*str);
	i = 0;
	j = 0;
	while (tmp[i + width])
	{
		(*str)[i] = tmp[i + width];
		i++;
	}
	while (tmp[i + j])
	{
		(*str)[i + j] = tmp[j];
		j++;
	}
	free(tmp);
}
