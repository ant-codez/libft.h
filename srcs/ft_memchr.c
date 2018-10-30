/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 13:15:11 by achavez           #+#    #+#             */
/*   Updated: 2018/10/23 13:46:37 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char *s;

	s = str;
	if (n != 0)
	{
		while (--n != 0)
			if (*s++ == c)
				return ((void *)(s - 1));
	}
	return (NULL);
}