/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmarquet <jmarquet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/07 18:28:35 by jmarquet     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/06 19:44:32 by jmarquet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include "limits.h"

int		ft_atoi(const char *str)
{
	int			i;
	long		res;
	int			is_negative;

	i = 0;
	res = 0;
	is_negative = 0;
	while (str[i] != '\0' && ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_negative = 1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		res *= 10;
		res += str[i++] - 48;
		if (res > INT_MAX + is_negative)
			return (-1);
	}
	return (is_negative == 1 ? (int)(-res) : (int)(res));
}
