/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_numlen_i.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/05 13:18:40 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/08 23:07:38 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>

size_t	ft_numlen_i(int num)
{
	size_t	cpt;

	cpt = 1;
	if (num == INT_MIN)
		return (4);
	if (num < 0)
	{
		cpt = 2;
		num = -num;
	}
	while (num > 9)
	{
		cpt++;
		num /= 10;
	}
	return (cpt);
}
