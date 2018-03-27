/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 22:22:33 by obamzuro          #+#    #+#             */
/*   Updated: 2018/03/27 17:10:47 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*a;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2) + 1;
	a = ft_strnew(i);
	if (!a)
		return (NULL);
	ft_strlcat(a, s1, i);
	ft_strlcat(a, s2, i);
	a[i] = 0;
	return (a);
}

int main()
{
	printf("%s\n", ft_strjoin("asdf", "qwe"));
}
