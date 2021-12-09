/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshana <sshana@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 01:14:46 by sshana            #+#    #+#             */
/*   Updated: 2021/11/09 18:48:12 by sshana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		src_len;
	char	*ptr;

	i = 0;
	src_len = ft_strlen(src);
	ptr = (char *)malloc(sizeof(char) * (src_len + 1));
	if (ptr == NULL)
		return (NULL);
	else
	{
		while (i < src_len)
		{
			ptr[i] = src[i];
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
}
