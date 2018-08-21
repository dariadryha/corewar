/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len_num.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismus <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 16:32:17 by ismus             #+#    #+#             */
/*   Updated: 2018/04/01 16:32:23 by ismus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		len_num(intmax_t n)
{
	int l;

	l = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		l++;
		n = -1 * n;
	}
	while (n > 0)
	{
		l++;
		n = n / 10;
	}
	return (l);
}
