/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: mhuescar < mhuescar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:21:46 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/13 12:27:43 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
=======
/*   By: mhuescar <mhuescar@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:21:46 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/10 13:26:36 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
>>>>>>> 8c32e3cb6b9de495bce9e02507851e6094e1ac2e

int	ft_isascii (int c)
{
	if(c>=0 && c<=127)
	       return (1);
	return (0);	
<<<<<<< HEAD
}
/*
=======
	
}

>>>>>>> 8c32e3cb6b9de495bce9e02507851e6094e1ac2e
int main (void)
{
int x;
x = ft_isascii (',');
printf ("el resultado es: %d", x);
return (x);
}
<<<<<<< HEAD
*/
=======
>>>>>>> 8c32e3cb6b9de495bce9e02507851e6094e1ac2e
