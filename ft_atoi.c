/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshana <sshana@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:39:28 by sshana            #+#    #+#             */
/*   Updated: 2021/11/11 19:40:34 by sshana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tab(const char *str, int i)
{
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' \
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	return (i);
}

int	ft_ato(const char *str, int sign, int i)
{
	long	res;
	int		x;

	res = 0;
	x = 0;
	while (str[i] != '\0')
	{
		if (48 <= str[i] && str[i] <= 57)
		{
			res = res * 10 + str[i] - '0';
			i++;
			x++;
		}
		else
			return (sign * res);
	}
	if (x > 17 && sign == 1)
		return (-1);
	if (x > 17 && sign == -1)
		return (0);
	return ((int)(sign * res));
}

int	ft_atoi(const char *str)
{
	int		i;
	long	sign;

	i = 0;
	sign = 1;
	i = ft_tab(str, i);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	return (ft_ato(str, sign, i));
}
