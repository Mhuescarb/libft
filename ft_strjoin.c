/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 12:14:39 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/22 13:20:53 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char*s2)

{
	char	*result;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = (char *)malloc (len1 + len2 +1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, len1 +1);
	ft_strlcat(result, s2, len1 + len2 +1);
	return (result);
}
/*
int main()
 {
    // Definir las cadenas de prueba
    const char *s1 = "Hola";
    const char *s2 = " Mundo";

    // Llamar a la función ft_strjoin para concatenar s1 y s2
    char *result = ft_strjoin(s1, s2);

    // Verificar si la memoria fue asignada correctamente
    if (result) {
        // Imprimir el resultado
        printf("Resultado de ft_strjoin: \"%s\"\n", result);
        // Liberar la memoria después de usarla
        free(result);
    } else {
        // Si la memoria no fue asignada correctamente
        printf("Error al asignar memoria para la concatenación.\n");
    }

    return 0;
}
*/