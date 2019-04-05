/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/07 18:28:47 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/05 15:24:19 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	int		i;

	if (s1 == NULL)
		return (NULL);
	else
	{
		if (!(new = (char*)malloc(ft_strlen(s1) + 1)))
			return (NULL);
		i = -1;
		while (s1[++i] != '\0')
			new[i] = (char)s1[i];
		new[i] = '\0';
	}
	return (new);
}
