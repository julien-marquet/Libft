/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/07 18:28:47 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/07 18:28:47 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	int		i;

	if (!(new = (char*)malloc(ft_strlen(s1) + 1)))
		return (0);
	i = -1;
	while (s1[++i] != '\0')
		new[i] = (char)s1[i];
	new[i] = '\0';
	return (new);
}
