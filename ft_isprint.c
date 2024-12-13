/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:45:21 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/10 14:04:52 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isprint (char c)
{
	if( c>= 32 && c<= 126)
		return (1);
	return (0);

}

int main (void)
{
 int x;

 x = ft_isprint ('\n');
 printf ("el resultado es: %d", x);
 return (0);
}
