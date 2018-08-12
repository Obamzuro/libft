/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 22:22:33 by obamzuro          #+#    #+#             */
/*   Updated: 2018/08/10 13:18:23 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*a;
	size_t	i;
	size_t	s1l;

	s1l = ft_strlen(s1);
	i = s1l + ft_strlen(s2) + 1;
	a = ft_strnew(i);
	if (!a)
		return (NULL);
	if (s1)
		ft_strcpy(a, s1);
	if (s2)
		ft_strcpy(a + s1l, s2);
	return (a);
}

char	*ft_chrjoin(const char *s1, char c)
{
	size_t	size;
	char	*ret;

	size = ft_strlen(s1);
	ret = (char *)malloc(size + 2);
	ft_memcpy(ret, s1, size);
	ret[size] = c;
	ret[size + 1] = 0;
	return (ret);
}

char	*ft_strjoin_char(const char *s1, const char *s2, char c)
{
	char	*a;
	size_t	i;
	size_t	s1l;

	s1l = ft_strlen(s1);
	i = s1l + ft_strlen(s2) + 2;
	a = ft_strnew(i);
	if (!a)
		return (NULL);
	if (s1)
		ft_strcpy(a, s1);
	a[s1l] = c;
	if (s2)
		ft_strcpy(a + s1l + 1, s2);
	return (a);
}

char	*ft_strjoin_path(const char *s1, const char *s2)
{
	char	*a;
	size_t	i;
	size_t	s1l;
	char	needslash;

	if (!s1 || !s2)
		return (NULL);
	s1l = ft_strlen(s1);
	needslash = 1;
	if (s1[s1l - 1] == '/')
		needslash = 0;
	i = s1l + ft_strlen(s2) + 1 + needslash;
	a = ft_strnew(i);
	if (!a)
		return (NULL);
	ft_strcpy(a, s1);
	if (needslash)
		a[s1l] = '/';
	ft_strcpy(a + s1l + needslash, s2);
	return (a);
}
