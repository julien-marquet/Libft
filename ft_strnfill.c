/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnfill.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/12 21:02:39 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/08 23:12:10 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strnfill(char **src, char filler, size_t len)
{
	size_t	i;

	i = 0;
	if (src != NULL)
	{
		while (i < len)
			(*src)[i++] = filler;
	}
}
