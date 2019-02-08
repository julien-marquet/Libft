/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcncount.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/08 21:57:11 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/08 23:09:09 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcncount(const char *s, const char c, size_t n)
{
	size_t		i;
	int			cpt;

	i = 0;
	cpt = 0;
	while (s[i] != '\0' && i < n)
	{
		if (s[i] == c)
			cpt++;
		i++;
	}
	return (cpt);
}
