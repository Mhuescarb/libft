/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar < mhuescar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:03:07 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/18 16:24:14 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    
    i = 0;
    while ((s1[i] || s2[i]) && i < n)
    {
        if ((unsigned char) s1[i] != (unsigned char) s2[i])
            return ((unsigned char) s1[i] - (unsigned char) s2[i]);
        i++;
    }
    return (0);
}
#include <stdio.h>
/*int main()
{
    const char *str1 = "Hello, world!";
    const char *str2 = "Hello, world!";
    const char *str3 = "Hello, there!";
    
    int result;

    // Comparar dos cadenas idénticas
    result = ft_strncmp(str1, str2, 5); // Compara los primeros 5 caracteres
    if (result == 0)
        printf("Las primeras 5 letras de str1 y str2 son iguales.\n");
    else if (result < 0)
        printf("str1 es menor que str2 en las primeras 5 letras.\n");
    else
        printf("str1 es mayor que str2 en las primeras 5 letras.\n");

    // Comparar dos cadenas diferentes
    result = ft_strncmp(str1, str3, 5); // Compara los primeros 5 caracteres
    if (result == 0)
        printf("Las primeras 5 letras de str1 y str3 son iguales.\n");
    else if (result < 0)
        printf("str1 es menor que str3 en las primeras 5 letras.\n");
    else
        printf("str1 es mayor que str3 en las primeras 5 letras.\n");

    // Comparar cadenas con longitud n mayor que la longitud real
    result = ft_strncmp(str1, str2, 15); // Compara hasta 15 caracteres, aunque str2 tiene solo 13 caracteres
    if (result == 0)
        printf("Las primeras 15 letras de str1 y str2 son iguales.\n");
    else if (result < 0)
        printf("str1 es menor que str2 en las primeras 15 letras.\n");
    else
        printf("str1 es mayor que str2 en las primeras 15 letras.\n");

    return 0;
}*/