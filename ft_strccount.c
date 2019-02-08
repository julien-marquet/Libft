/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strccount.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/08 21:52:59 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/08 23:08:52 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strccount(const char *s, const char c)
{
	size_t		i;
	int			cpt;

	i = 0;
	cpt = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			cpt++;
		i++;
	}
	return (cpt);
}
