/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 11:22:24 by paminna           #+#    #+#             */
/*   Updated: 2020/10/30 19:44:53 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char 	cpy[len];
	int		i;
	char 	*s;
	char	*d;

	i = 0;
	s = (char*)src;
	d =	(char*)dst;
	while (i != len)
	{
		cpy[i] = s[i];
		i++;
	}
	i = 0;
	while (cpy[i])
	{
		d[i] = cpy[i];
		i++;
	}
	return (d);
}
int		main(void)
{
	unsigned char src[10] = "1234567890";
	printf("src old: %s\n", src);
	ft_memmove(&src[4], &src[6], 3);
	printf("my new src: %s\n", src);
	return (0);
}
