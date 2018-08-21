/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismus <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 14:41:55 by ismus             #+#    #+#             */
/*   Updated: 2017/10/24 14:48:51 by ismus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		l;
	int		i;
	char	*c;

	l = 0;
	i = 0;
	while (src[l] != '\0')
		l++;
	c = (char *)malloc(sizeof(*c) * (l + 1));
	if (!c)
		return (0);
	while (i < l)
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}