/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar < mhuescar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 12:02:46 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/19 14:47:03 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    size_t i;
    unsigned char uc;
    
    str = (unsigned char *) s;  // converting both s and c to unsigned char 
    uc = (unsigned char) c;
    i = 0;
    while (i < n) // looping over n bytes 
    {
        if (str[i] == uc)
            /* there, we return a void pointer instead
             * of the char pointer we returned in strchr
             */
            return ((void *) &str[i]);
        i++;
    }
    /* if we reached this point, we didn't find any occurence
     * of c in n bytes, so we return NULL
     */
    return (NULL);
}
int main() 
{   
    char str[] = "Hola, mundo!";
    char c = 'm';
    
    void *result = ft_memchr(str, c, ft_strlen(str));
    
    if (result != NULL) 
    {
        printf("El carácter '%c' se encontró en la posición: %ld\n", c, (char *)result - str);
    } 
    else 
    {
        printf("El carácter '%c' no se encontró.\n", c);
    }
    return 0;
}