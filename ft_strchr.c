/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshana <sshana@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:44:39 by sshana            #+#    #+#             */
/*   Updated: 2021/11/09 18:44:40 by sshana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char	*ach;
	int		i;

	i = 0;
	ach = (char *)str;
	while (str[i])
	{
		if (str[i] == (char)ch)
			return (ach);
		i++;
		ach++;
	}
	if (str[i] == '\0' && (char)ch == '\0')
		return (ach);
	return (0);
}
