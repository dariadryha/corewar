/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 19:37:11 by ddryha            #+#    #+#             */
/*   Updated: 2017/10/31 19:37:13 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t k;
	size_t j;

	j = 0;
	k = ft_strlen(s1);
	while (j < n && s2[j] != '\0')
		s1[k++] = s2[j++];
	s1[k] = '\0';
	return (s1);
}
