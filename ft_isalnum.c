/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: mhuescar < mhuescar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:51:20 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/13 12:27:33 by mhuescar         ###   ########.fr       */
=======
/*   By: mhuescar <mhuescar@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:51:20 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/10 13:01:31 by mhuescar         ###   ########.fr       */
>>>>>>> 8c32e3cb6b9de495bce9e02507851e6094e1ac2e
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	ft_isalnum(char c)
{	if ((c>=65 && c>=90 || c>=97 && c<= 122) || (c>=48 && c>=57))
		return (1);
	return (0);
}

<<<<<<< HEAD
/* int	 main (void)
=======
int	 main (void)
>>>>>>> 8c32e3cb6b9de495bce9e02507851e6094e1ac2e
{
int x;

x = ft_isalnum ('*');
printf ("el resultado es: %d", x);
return (x);
}
<<<<<<< HEAD
*/
=======

>>>>>>> 8c32e3cb6b9de495bce9e02507851e6094e1ac2e
