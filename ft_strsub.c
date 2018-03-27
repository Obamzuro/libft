/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 22:12:36 by obamzuro          #+#    #+#             */
/*   Updated: 2018/03/26 18:10:13 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char *a;

	if (!s)
		return (NULL);
	a = (char *)malloc(len + 1);
	if (!a)
		return (NULL);
	a[len] = 0;
	while (len)
	{
		len--;
		a[len] = s[start + len];
	}
	return (a);
}
