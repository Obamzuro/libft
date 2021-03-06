/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 21:09:16 by obamzuro          #+#    #+#             */
/*   Updated: 2018/04/03 14:39:30 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *a;

	a = malloc(size + 1);
	if (!a)
		return (NULL);
	while (size + 1)
		a[size--] = 0;
	return (a);
}
