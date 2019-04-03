/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr_i.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/03 15:50:16 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/03 16:07:12 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_strstr_i(const char *haystack, const char *needle)
{
	unsigned int	i;
	unsigned int	len;
	int				res;

	res = -1;
	i = 0;
	len = ft_strlen(needle);
	if (haystack[0] == '\0' && needle[0] == '\0')
		return (0);
	while (haystack[i])
	{
		if (ft_strnequ(&haystack[i], needle, len))
			return (i);
		i++;
	}
	return (res);
}
