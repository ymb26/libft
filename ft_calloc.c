/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshana <sshana@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 01:08:16 by sshana            #+#    #+#             */
/*   Updated: 2021/11/10 17:30:24 by sshana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void		*ptr;

	ptr = malloc(number * size);
	if (!ptr)
		return (NULL);
	else
		ft_memset(ptr, 0, (number * size));
	return (ptr);
}
