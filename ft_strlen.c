/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshana <sshana@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:21:32 by sshana            #+#    #+#             */
/*   Updated: 2021/11/09 19:07:48 by sshana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *ch)
{
	size_t	len;

	len = 0;
	while (*ch != '\0')
	{
		len++;
		ch++;
	}
	return (len);
}
