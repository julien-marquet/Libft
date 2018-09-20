/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_getenv.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/19 16:12:40 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2018/09/19 16:55:48 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_getenv(const char *name, char **env)
{
	size_t	i;
	size_t	j;

	i = 0;

	while (env[i] != NULL)
	{
		ft_printf("%s\n", env[i]);
		j = 0;
		while (name[j] == env[i][j])
		{
			if (env[i][j] == '\0')
				continue ;
			else if (name[j] == '\0')
			{
				if (env[i][j] == '=')
					return (ft_strdup(&(env[i][j + 1])));
				continue ;
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
