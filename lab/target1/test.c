#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void printf_c(char* s, size_t size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d: %x ", i, (unsigned int)(*(s+i)));
    }
    return;
}
int main()
{
    char s[50];
    gets(s);
    return 0;
}
