/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:40:12 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/10 12:50:02 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(char c)
{
	if(c>=48 && c<=57)
		return (1);
	return (0);
}

int main (void)
{
int x;
x = ft_isdigit('8');
printf ("el resultado es: %d", x);
return(x);
}
