/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:21:46 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/15 12:49:19 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_isascii (int c)
{
	if(c>=0 && c<=127)
	       return (1);
	return (0);	
	
}
/*int main (void)
{
int x;
x = ft_isascii (',');
printf ("el resultado es: %d", x);
return (x);
}
*/