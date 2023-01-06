#include<stdio.h>
int main()
{
    int num;
    char percentage = '%';
    printf("Please, Enter a number along with %c sign: ", percentage);
    scanf("%d", &num);

    printf("Your input number is %d", num);
    return 0;
}
