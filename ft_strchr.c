/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 14:36:09 by paminna           #+#    #+#             */
/*   Updated: 2020/11/01 20:57:55 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int i;
	char *cpy;

	i = 0;
	if (c == '\0')
		return (NULL);
	while (s[i])
	{
		if(s[i] == c)
			return(&s[i]);
		i++;
	}
}
int		main(void)
{
	int	ch = '3';
	char *s = "123456";
	printf("%s\n", ft_strchr (s, ch));
}
