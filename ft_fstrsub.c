/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fstrsub.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 13:16:05 by obamzuro          #+#    #+#             */
/*   Updated: 2018/04/06 13:20:58 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_fstrsub(const char *s, unsigned int start, size_t len)
{
	char		*a;
	const char	*c;
	size_t		i;

	a = ft_strnew(len);
	if (!a)
		return (NULL);
	i = 0;
	c = (s + start);
	while (i != len && *c)
	{
		a[i++] = *c;
		c++;
	}
	return (a);
}
