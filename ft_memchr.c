/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshana <sshana@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 00:08:40 by sshana            #+#    #+#             */
/*   Updated: 2021/11/09 15:22:06 by sshana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t	i;

	if (!arr && !n && !c)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(arr + i) == (unsigned char)c)
			return ((void *)(arr + i));
		i++;
	}
	return (NULL);
}
