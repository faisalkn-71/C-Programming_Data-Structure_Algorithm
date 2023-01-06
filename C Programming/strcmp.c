#include <stdio.h>
#include <string.h>
int main()
{
    char name1[] = "faisalKarim";
    char name2[] = "faisalkarim";

    printf("%d\n", strcmp(name1, name2));
    printf("%d\n", strncmp(name1, name2, 4));
    printf("%d\n", strcasecmp(name1, name2)); // case don't count

    return 0;
}