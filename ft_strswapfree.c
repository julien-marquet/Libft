/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strswapfree.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/24 11:04:17 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/08 23:12:58 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strswapfree(char **buffer, char *str)
{
	char	*tmp;

	if (buffer == NULL || *buffer == NULL || str == NULL)
		return (0);
	tmp = *buffer;
	*buffer = str;
	free(tmp);
	return (1);
}
