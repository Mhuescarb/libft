/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 10:38:26 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/15 13:12:13 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int ft_strlcpy (char *dst, char *src, unsigned int size)
{
    int i = 0;
    while(src [i] != '/0' && i< size-1)
    {
        dst[i] = src [i];
        i++;
    }

    return(ft_strlen(src));
}