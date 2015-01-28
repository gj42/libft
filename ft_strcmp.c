/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjensen <gjensen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:19:06 by gjensen           #+#    #+#             */
/*   Updated: 2015/01/28 18:24:38 by gjensen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
	int 			i;
	unsigned char	*ts1;
	unsigned char	*ts2;

	i = 0;
	ts1 = (unsigned char*)s1;
	ts2 = (unsigned char*)s2;
	if (ts1 && ts2)
	{
		while (ts1[i] && ts2[i])
		{
			if (ts1[i] != ts2[i])
				return (ts1[i] - ts2[i]);
			i++;
		}
	}
	return (ts1[i] - ts2[i]);
}
