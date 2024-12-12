#include <stdio.h>
void ft_bzero (void *s, size_t n)
{
int i;
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
    printf("Antes de ft_bzero: %s\n", buffer);
    
    ft_bzero(buffer, 5);
    
    printf("Después de ft_bzero: %s\n", buffer);
    
    return 0;
}
*/