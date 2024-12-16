/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar < mhuescar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 11:49:51 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/16 14:59:07 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_bzero (void *s, size_t n)

{
size_t i;
i = 0;
char *ptr;
ptr = (char *)s;
    while (i < n)
    {
        ptr[i] = 0;
        i++;
    }
}
/*int main() 
{
    char buffer[10] = "HelloWorld";
    printf("before ft_bzero: %s\n", buffer);
    
    ft_bzero(buffer, 5);
    
    printf("afer ft_bzero: %s\n", buffer);
    return 0;
}
*/
