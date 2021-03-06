/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_while_not_n.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismus <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 16:11:09 by ismus             #+#    #+#             */
/*   Updated: 2018/04/16 16:11:09 by ismus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_rev_while_not_n(char *str, char n)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (str[i] != n && str[i])
		i--;
	if (!(str[i]))
		return (-1);
	return (i);
}
