/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@stud.21-school.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 20:40:48 by paminna           #+#    #+#             */
/*   Updated: 2020/11/13 23:59:40 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set)
{
    int     i;
    int     j;
    int     start;
    
    i = 0;
    j = 0;
    if (s1 == NULL || set == NULL)
        return (NULL);
    while (s1[i])
    {
        if(ft_strchr(s1,set[j]) != NULL)
            start = i;
        i++;
    }
    j = ft_strlen(set);
    return (ft_substr(s1, start,set[j]));
}