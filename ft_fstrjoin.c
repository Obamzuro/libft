/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fstrjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 20:46:47 by obamzuro          #+#    #+#             */
/*   Updated: 2018/04/05 21:02:53 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_fstrjoin(int s1l, const char *s1, int s2l, const char *s2)
{
	char	*a;
	char	*b;
	size_t	i;

	i = s1l + s2l + 1;
	a = (char *)malloc(sizeof(char) * i);
	b = a;
	if (!a)
		return (NULL);
	if (s1)
		b = ft_fstrcpy(b, s1);
	if (s2)
		b = ft_fstrcpy(b, s2);
	return (a);
}
