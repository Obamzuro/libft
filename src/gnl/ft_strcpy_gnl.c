/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_gnl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 13:09:15 by obamzuro          #+#    #+#             */
/*   Updated: 2018/04/10 13:09:16 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy_gnl(char *dst, const char *src)
{
	while (*src)
		*dst++ = *src++;
	*dst = *src;
	return (dst);
}
