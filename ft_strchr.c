/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar < mhuescar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:07:28 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/19 18:34:24 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <libft.h>*/
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    unsigned int    i;
    char cc = c;

    //c = (char) c;// aquí no entiendo lo del cambio de int a char
    i = 0;

while (s[i])
{
    
    if (s[i] == cc)
        return ((char*) &s[i]);
    i++;
}

if (s[i] == cc)
    return ((char *) &s[i]);
return (NULL);
}
/*
int main(void)
{
    const char *str = "Hola, mundo!";
    char ch = 'm';

    char *result = ft_strchr(str, ch);
    if (result) {
        printf("El carácter '%c' se encuentra en la posición: %ld\n", ch, result - str);
    } else {
        printf("El carácter '%c' no se encuentra en la cadena.\n", ch);
    }

    // Probar con un carácter no encontrado
    ch = 'z';
    result = ft_strchr(str, ch);
    if (result) {
        printf("El carácter '%c' se encuentra en la posición: %ld\n", ch, result - str);
    } else {
        printf("El carácter '%c' no se encuentra en la cadena.\n", ch);
    }

    return 0;
}
*/