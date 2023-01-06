#include <stdio.h>
#include <string.h>
int main()
{
    char name1[] = "Faisal";
    char name2[] = " Karim";

    printf("%s\n", name1);
    printf("%d\n", strlen(name1));

    strcat(name1, name2);

    puts(name1);
    printf("%d\n", strlen(name1));
}