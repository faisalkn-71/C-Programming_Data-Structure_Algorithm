#include <stdio.h>
#include <string.h>
int main()
{
    char name[] = "FaisalKarim";

    // puts(name);

    printf("%d\n", strlen(name));

    printf("%d\n", strnlen(name, 7));

    return 0;
}