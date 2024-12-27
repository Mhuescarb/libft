/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:56:05 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/27 18:11:55 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_inic_var(size_t *i, int *j, int *start)
{
	*i = 0;
	*j = 0;
	*start = -1;
}

static int	ft_counter(const char *s, char c)
{
	int	count;
	int	inside;

	count = 0;
	inside = 0;
	while (*s)
	{
		if (*s != c && inside == 0)
		{
			inside = 1;
			count++;
		}
		else if (*s == c)
		{
			inside = 0;
		}
		s++;
	}
	return (count);
}

static char	*ft_fill(const char *s, int start, int end)
{
	char	*new_word;
	int		i;

	new_word = malloc ((end - start + 1) * sizeof(char));
	i = 0;
	if (!new_word)
	{
		return (NULL);
	}
	while (start < end)
	{
		new_word[i] = s[start];
		i++;
		start++;
	}
	new_word[i] = 0;
	return (new_word);
}

static void	*ft_free(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	int		j;
	int		start;

	ft_inic_var(&i, &j, &start);
	result = malloc((ft_counter(s, c) + 1) * sizeof(char *));
	if (!s || !result)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || s[i] == '\0') && start >= 0)
		{
			result[j] = ft_fill(s, start, i);
			if (!result[j++])
				return (ft_free(result, j - 1));
			start = -1;
		}
		i++;
	}
	result[j] = NULL;
	return (result);
}
/*

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Cadena de ejemplo para dividir
    char *str = "   hola  mundo   desde 42   ";
    char delimiter = ' ';  // Espacio como delimitador

    // Llamamos a ft_split para dividir la cadena
    char **result = ft_split(str, delimiter);

    // Comprobamos si ft_split devolvió un array válido
    if (!result)
    {
        printf("Error al dividir la cadena\n");
        return (1);
    }

    // Imprimimos las palabras separadas
    int i = 0;
    while (result[i])
    {
        printf("Palabra %d: '%s'\n", i + 1, result[i]);
        i++;
    }

    // Liberamos la memoria utilizada por las palabras
    i = 0;
    while (result[i])
    {
        free(result[i]);  // Liberamos cada palabra
        i++;
    }
    free(result);  // Liberamos el array de punteros

    return 0;
}
*/