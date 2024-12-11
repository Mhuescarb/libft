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


int main(void) 
{

    char buffer[10];
    
    printf("Contenido antes de ft_memset: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", buffer[i]);
    }
    printf("\n");

    ft_memset(buffer, 65, 10);
   
    printf("Contenido después de ft_memset: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", buffer[i]);
    }
    printf("\n");

    printf("Contenido como caracteres: ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", buffer[i]);
    }
    printf("\n");

    return 0;
}
