/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshana <sshana@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 20:50:10 by sshana            #+#    #+#             */
/*   Updated: 2021/11/10 22:36:10 by sshana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int ch)
{
	if ('A' <= ch && ch <= 'Z')
		return (1);
	else if ('a' <= ch && ch <= 'z')
		return (1);
	else
		return (0);
}
