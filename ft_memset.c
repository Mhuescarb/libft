/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar < mhuescar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:31:39 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/13 12:36:32 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

   #include <string.h>
   #include <stdio.h>
void *ft_memset(void *b, int c, size_t len)
{ 
    int i;
    i = 0;
    unsigned char *ptr;
    ptr = (unsigned char*)b;
    while (i < len)
    {
        ptr[i] = c;
        i++;
    }
    return (b);
}
/*
int main(void) 
{
    char buffer[10];
    
    printf("before ft_memset: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", buffer[i]);
    }
    printf("\n");

    ft_memset(buffer, 65, 10);
   
    printf(after ft_memset: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", buffer[i]);
    }
    printf("\n");

    printf("content as charts: ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", buffer[i]);
    }
    printf("\n");
    return 0;
}
*/