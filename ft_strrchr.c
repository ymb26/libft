/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshana <sshana@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:16:14 by sshana            #+#    #+#             */
/*   Updated: 2021/11/09 19:18:01 by sshana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		i;
	int		l;
	char	*ach;

	i = 0;
	l = ft_strlen(str) - 1;
	ach = (char *)str;
	while (str[i])
	{
		if (str[l] == (char)ch)
		{
			ach = ach + l;
			return (ach);
		}
		i++;
		l--;
	}
	if (str[l] == ch)
		return ((char *)str + i);
	return (NULL);
}
