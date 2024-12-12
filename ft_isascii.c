/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:21:46 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/10 13:26:36 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isascii (int c)
{
	if(c>=0 && c<=127)
	       return (1);
	return (0);	
	
}

int main (void)
{
int x;
x = ft_isascii (',');
printf ("el resultado es: %d", x);
return (x);
}
